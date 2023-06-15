/*Selecionar 3 Algoritmos de Ordenamiento, Ordenar un arreglo de 100 datos Aleatorios,
implementar Busqueda Secuencial y Busqueda Binaria. */

#include<iostream>
#include<cstdlib>
#include<string>
#include<locale.h>

std::string seguir = "S", seguir1 = "S";
int elegir = 0, elegir1 = 0, ordenar = 0, tamano = 100, maximo = 100, dato = 0;
int arreglo[100];
char band = 'F';


void inicio()
{
	system("CLS");
	for (int i = 0; i < tamano; ++i)
	{
		arreglo[i] = rand() % maximo;
	}

	std::cout << "\n\nBienvenido a tu arreglo Aleatorio!\n\n";
	std::cout << "|----------------------------------------|\n";
	std::cout << "|----------1.Busqueda Secuencial---------|\n";
	std::cout << "|-----------2.Busqueda Binaria-----------|\n";
	std::cout << "|----------------------------------------|\n";
	std::cout << "\nElige el metodo a usar para buscar un numero entero:\n";

	std::cin >> elegir;

	while (elegir != 1 and elegir != 2)
	{
		std::cout << "Error. Digite 1 o 2 para seleccionar metodo: "; std::cin >> elegir;
	}
}

void coctailSort()
{
	int n, c = 0;
	n = tamano;

	do {
		for (int i = 0; i < n - 1; i++)
		{
			if (arreglo[i] > arreglo[i + 1])
			{
				arreglo[i] = arreglo[i] + arreglo[i + 1];
				arreglo[i + 1] = arreglo[i] - arreglo[i + 1];
				arreglo[i] = arreglo[i] - arreglo[i + 1];
			}
		}
		n = n - 1;

		for (int i = tamano - 1, c = 0; i >= c; i--)
		{
			if (arreglo[i] < arreglo[i - 1])
			{
				arreglo[i] = arreglo[i] + arreglo[i - 1];
				arreglo[i - 1] = arreglo[i] - arreglo[i - 1];
				arreglo[i] = arreglo[i] - arreglo[i - 1];
			}
		}
		c = c + 1;
	} while (n != 0 && c != 0);
}

void countingSort()
{
	int output[100];
	int count[100];
	int max = arreglo[0];

	for (int i = 1; i < tamano; i++) 
	{
		if (arreglo[i] > max)
		{
			max = arreglo[i];
		}
	}

	for (int i = 0; i <= max; ++i) 
	{
		count[i] = 0;
	}

	for (int i = 0; i < tamano; i++) 
	{
		count[arreglo[i]]++;
	}

	for (int i = 1; i <= max; i++) 
	{
		count[i] += count[i - 1];
	}

	for (int i = tamano - 1; i >= 0; i--) 
	{
		output[count[arreglo[i]] - 1] = arreglo[i];
		count[arreglo[i]]--;
	}

	for (int i = 0; i < tamano; i++) 
	{
		arreglo[i] = output[i];
	}
}

void shellSort()
{
	for (int interval = tamano / 2; interval > 0; interval /= 2) 
	{
		for (int i = interval; i < tamano; i += 1) 
		{
			int temp = arreglo[i];
			int j;

			for (j = i; j >= interval && arreglo[j - interval] > temp; j -= interval) 
			{
				arreglo[j] = arreglo[j - interval];
			}
			arreglo[j] = temp;
		}
	}
}

void ordenarArreglos()
{
	system("CLS");
	std::cout << "|--------------------------------------------|\n";
	std::cout << "|----------1.Ordenamiento de Coctel----------|\n";
	std::cout << "|----------2.Ordenamiento de Conteo----------|\n";
	std::cout << "|---------3.Ordenamiento de Caparazon--------|\n";
	std::cout << "|--------------------------------------------|\n";
	std::cout << "\nElige el metodo a usar para ordenar el arreglo:\n";
	std::cin >> ordenar;

	while (ordenar != 1 and ordenar != 2 and ordenar != 3)
	{
		std::cout << "Error. Digite 1,2 o 3 para seleccionar metodo: "; std::cin >> ordenar;
	}

	switch (ordenar)
	{
	case 1:	coctailSort(); break;

	case 2:	countingSort(); break;

	case 3: shellSort(); break;
	}
}

void busquedaSecuencial()
{
	std::cout << "Digite el numero entero a buscar: "; std::cin >> dato;

	int i = 0;

	while ((band == 'F') && (i < tamano + 1))
	{
		if (arreglo[i] == dato)
		{
			band = 'V';
		}
		i++;
	}

	if (band == 'F')
	{
		std::cout << "El numero a buscar no existe en el arreglo :c\n\n";
	}
	else if (band == 'V')
	{
		std::cout << "El numero ha sido encontrado en la pos: " << i - 1 << "\n\n";
	}

	std::cout << "Desea ordenar el arreglo? S o N: "; std::cin >> seguir1;

	while (seguir1 != "S" and seguir1 != "s" and seguir1 != "n" and seguir1 != "N")
	{
		std::cout << "ERROR. Digite S o N para una opcion valida: "; std::cin >> seguir1;
	}

	if (seguir1 == "S" or "s")
	{
		ordenarArreglos();
	}
	else if (seguir1 == "N" or "n")
	{
		//Salir de la función
	}
}

void busquedaBinaria()
{
	int inf = 0, sup = tamano, mitad = 0;

	std::cout << "Digite el numero entero a buscar: "; std::cin >> dato;

	while (inf <= sup)
	{
		mitad = (inf + sup) / 2;

		if (arreglo[mitad] == dato)
		{
			band = 'V';
			break;
		}
		if (arreglo[mitad] > dato)
		{
			sup = mitad;
			mitad = (inf + sup) / 2;
		}
		if (arreglo[mitad] < dato)
		{
			inf = mitad;
			mitad = (inf + sup) / 2;
		}
	}

	if (band == 'V')
	{
		std::cout << "El numero ha sido encontrado! En la posicion " << mitad << "\n";
	}
	else
	{
		std::cout << "El numero no ha sido encontrado! :c \n\n";
	}

	std::cout << "Desea ordenar el arreglo? S o N"; std::cin >> seguir1;
	while (seguir1 != "S" and seguir1 != "s" and seguir1 != "n" and seguir1 != "N")
	{
		std::cout << "ERROR. Digite S o N para una opcion valida: "; std::cin >> seguir1;
	}

	if (seguir1 == "S" or "s")
	{
		ordenarArreglos();
	}
	else if(seguir1 == "N" or "n")
	{
		//Salir de la función
	}
}

void escogerBusqueda()
{
	switch (elegir)
	{
	case 1:	busquedaSecuencial(); break;

	case 2:	busquedaBinaria(); break;
	}
}

void imprimirDatos()
{
	if (seguir1 == "S" or seguir1 == "s")
	{
		std::cout << "Vector Aleatorio Ordenado: ";
		for (int i = 0; i < tamano; i++)
		{
			std::cout << arreglo[i] << " ";
		}
	}
	else
	{
		//No se imprime nada
	}
}

int main()
{
	setlocale(LC_CTYPE, "Spanish");

	while (seguir == "S" or seguir == "s")
	{
		inicio();
		escogerBusqueda();
		imprimirDatos();

		std::cout << "\n\nDesea buscar otro numero? Digite S o N\n";
		std::cin >> seguir;

		while (seguir != "S" and seguir != "s" and seguir != "n" and seguir != "N")
		{
			std::cout << "Error. Digite S o N para continuar: \n"; std::cin >> seguir;
		}
	}

	std::cout << "\n\n";

	system("pause");
	return 0;
}