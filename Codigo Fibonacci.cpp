/* Crear ALgoritmo que imprima la pantalla los números de la sucessión de fibonacci
hasta el término dado por el usuario. */

#include<iostream>
#include<stdlib.h>

void PedirDatos(int);
void Fibonacci(int, int, int, int);
int n, x = 0, y = 1, z = 1;

int main()
{
	system("CLS");

	PedirDatos(n);
	Fibonacci(n, x, y, z);

	system("pause");
	return 0;
}

Void PedirDatos(int n)
{
	std::cout << "Digite el numero de elementos: "; std::cin >> n;
}

void Fibonacci(int n, int x, int y, int z)
{
	std::cout << "1 ";
	for (int i = 1; i < n; i++)
	{
		z = x + y;
		std::cout << z << " ";
		x = y;
		y = z;
	}

	std::cout << "\n";
}