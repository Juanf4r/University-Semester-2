/*Selecionar 3 Algoritmos de Ordenamiento, Ordenar un arreglo de 100 datos Aleatorios,
implementar Busqueda Secuencial y Busqueda Binaria. */

#include<iostream>
#include<cstdlib>
#include<string>
#include<locale.h>

std::string seguir = "S", seguir1 = "S";
int elegir = 0, tamano = 100, maximo = 10;
int arreglo[100];


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
	std::cout << "\nElige el metodo a usar para buscar un numero:\n";

	std::cin >> elegir;

	while (elegir != 1 and elegir != elegir != 2)
	{
		std::cout << "Error. Digite 1 o 2 para seleccionar metodo: "; std::cin >> elegir;
	}
}

void busquedaSecuencial()
{



	std::cout << "Desea ordenar el arreglo? S o N"; std::cin >> seguir1;
	while (seguir1 != "S" and seguir1 != "s" and seguir1 != "n" and seguir1 != "N")
	{
		std::cout << "ERROR. Digite S o N para una opcion valida: "; std::cin >> seguir1;
	}
}

void busquedaBinaria()
{



	std::cout << "Desea ordenar el arreglo? S o N"; std::cin >> seguir1;
	while (seguir1 != "S" and seguir1 != "s" and seguir1 != "n" and seguir1 != "N")
	{
		std::cout << "ERROR. Digite S o N para una opcion valida: "; std::cin >> seguir1;
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
	std::cout << "Vector Aleatorio Ordenado: ";
	for (int i = 0; i < tamano; i++)
	{
		std::cout << arreglo[i] << " ";
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