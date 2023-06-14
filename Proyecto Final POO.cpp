/*Selecionar 3 Algoritmos de Ordenamiento, Ordenar un arreglo de 100 datos Aleatorios,
implementar Busqueda Secuencial y Busqueda Binaria. */

#include<iostream>
#include<cstdlib>
#include<string>
#include<locale.h>

std::string seguir = "S", seguir1 = "S";
int elegir = 0, elegir1 = 0, tamano = 100, maximo = 100, dato = 0;
int arreglo[100];
char band =  'F';


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

void ordenarArreglos()
{
	system("CLS");
	std::cout << "|----------------------------------------|\n";
	std::cout << "|----------1.Busqueda Secuencial---------|\n";
	std::cout << "|-----------2.Busqueda Binaria-----------|\n";
	std::cout << "|-----------3.Busqueda Binaria-----------|\n";
	std::cout << "|----------------------------------------|\n";
	std::cout << "\nElige el metodo a usar para ordenar el arreglo:\n";
	std::cin >> elegir1;

	while (elegir1 != 1 and elegir1 != 2 and elegir1 != 3)
	{
		std::cout << "Error. Digite 1,2 o 3 para seleccionar metodo: "; std::cin >> elegir1;
	}

	switch (elegir1)
	{
	case 1:	//

	case 2:	//

	case 3: //

	default: std::cout << "Digite un 1,2 o 3 para elegir: "; std::cin >> elegir1; ordenarArreglos; break;
	}
}

void busquedaSecuencial()
{
	std::cout << "Digite el numero entero a buscar: "; std::cin >> dato;

	int i = 0;

	while ((band == 'F') && (i < tamano +1))
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

	std::cout << "Desea ordenar el arreglo? S o N"; std::cin >> seguir1;
	while (seguir1 != "S" and seguir1 != "s" and seguir1 != "n" and seguir1 != "N")
	{
		std::cout << "ERROR. Digite S o N para una opcion valida: "; std::cin >> seguir1;
	}

	if (seguir1 == "S" or "s")
	{
		ordenarArreglos();
	}
	else
	{
		//Salir de la función
	}
}

void busquedaBinaria()
{
	int inf = 0, sup = tamano, mitad = 0;

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
	else
	{
		//Salir de la función
	}
}

void escogerBusqueda()
{
	switch (elegir)
	{
	case 1:	busquedaSecuencial();

	case 2:	busquedaBinaria();

	default: std::cout << "Digite un 1 o 2 para elegir: "; std::cin >> elegir; escogerBusqueda(); break;
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

		std::cout << "Desea buscar otro numero? Digite S o N\n";
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