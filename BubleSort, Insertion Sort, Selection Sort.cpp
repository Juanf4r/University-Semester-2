//BubbleSort, Insertion Sort, Selection Sort

#include<iostream>
#include<cstdlib>
#include<Windows.h>
#include<time.h>

std::string seguir = "S";
int numeros[6], aux = 0, pos = 0;
int opcion = 0, tamano = 6, maximo = 10;

void inicio()
{
	system("CLS");
	for (int i = 0; i < tamano; ++i)
	{
		numeros[i] = rand() % maximo;
	}
		
	std::cout << "Vector Aleatorio: ";
	for (int i = 0; i < 6; i++)
	{
		std::cout << numeros[i] << " ";
	}

	std::cout << "\n\n----------------------------------------------\n";
	std::cout << "-----------1.Ordenamiento de Burbuja----------\n";
	std::cout << "----------2.Ordenamiento de Insercion---------\n";
	std::cout << "----------3.Ordenamiento de Seleccion---------\n";
	std::cout << "----------------------------------------------\n\n";
	std::cout << "Digite la opcion a elegir: "; std::cin >> opcion;

	while (opcion != 1 and opcion != 2 and opcion != 3)
	{
		std::cout << "ERROR. Digite una opcion valida a elegir: "; 
		std::cin >> opcion;
	}
}

void bubbleSort()
{
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (numeros[j] > numeros[j + 1])
			{
				aux = numeros[j];
				numeros[j] = numeros[j + 1];
				numeros[j + 1] = aux;
			}
		}
	}
}

void insertionSort()
{
	for (int i = 0; i < 6; i++)
	{
		pos = i;
		aux = numeros[i];

		while ((pos > 0) && (numeros[pos - 1] > aux))
		{
			numeros[pos] = numeros[pos - 1];
			pos--;
		}
		numeros[pos] = aux;
	}
}

void selectionSort()
{
	for (int i = 0; i < 6; i++)
	{
		pos = i;

		for (int j = i + 1; j < 6; j++)
		{
			if (numeros[j] < numeros[pos])
			{
				pos = j;
			}
		}
		aux = numeros[i];
		numeros[i] = numeros[pos];
		numeros[pos] = aux;
	}
}

void elegir()
{
	switch (opcion)
	{
	case 1: bubbleSort(); break;

	case 2: insertionSort(); break;

	case 3: selectionSort(); break;

	default: std::cout << "ERROR. Digite una opcion valida: "; std::cin >> opcion; elegir();

	}
}

void imprimirDatos()
{
	std::cout << "Vector Aleatorio: ";
	for (int i = 0; i < 6; i++)
	{
		std::cout << numeros[i] << " ";
	}
}

int main()
{
	system("CLS");

	std::cout << "Bienvenido!\n"; Sleep(777);
	std::cout << "Este programa crea un vector de 6 numeros aleatorios\n"; Sleep(1500);
	std::cout << "Seleccione un metodo para ordenar el vector de orden ascendente: \n"; Sleep(3000);

	while (seguir == "S" or seguir == "s")
	{
		inicio();
		elegir();
		imprimirDatos();

		std::cout << "\n\nDesea ordenar otro vector aleatorio? Digite S o N\n"; 
		std::cin>>seguir;

		while (seguir != "S" and seguir != "s" and seguir != "n" and seguir != "N")
		{
			std::cout << "ERROR. Digite S o N: "; std::cin >> seguir;
		}
	}

	std::cout << "\n\n";
	system("pause");
	return 0;
}