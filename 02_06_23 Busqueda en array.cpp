/*Algoritmo para ingresar una cantidad y mostrar si esta en el array o no. */

#include<iostream>
#include<cstdlib>

int array[9] = { 10,32,21,5,49,31,10,40,1 };
int N = 0, i = 0;
char seguir = 's';

void algoritmo()
{
	while (i <9 and array[i] != N)
	{i++;}
}

void mostrarResultado()
{
	if (i < 9)
	{
		std::cout << "El numero que ingreso esta en la posicion: " << i<<"\n";
	}
	else
	{
		std::cout << "El numero no esta en el arreglo\n";
	}
}

int main()
{
	system("CLS");

	do
	{
		std::cout << "Digite un numero a buscar: "; std::cin >> N;
		algoritmo();
		mostrarResultado();

		std::cout << "\nGusta buscar otro numero?\n" << "Digite S para si, N para no\n"; std::cin >> seguir;

	} while (seguir == 's' or seguir == 'S');

	system("pause");
	return 0;
}