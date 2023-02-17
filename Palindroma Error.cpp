/* Algoritmo que detecte si una cadena de caracteres es un palindromo */

#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<string>

std::string palabra, comprobar;

void PedirDatos();

int main()
{
	system("CLS");

	PedirDatos();
	
	for (int i = 0; i < 30; i++)
	{
		if (palabra[i] != ' ')
		{
			comprobar += palabra[i];
		}
	}
	std::cout << palabra << std::endl;

	if (palabra == comprobar)
	{
		std::cout << "La palabra " << palabra << " es palindroma \n";
	}
	else
	{
		std::cout << "La palabra " << palabra << " no es palindroma \n";
	}

	system("pause");
	return 0;
}

void PedirDatos()
{
	std::cout << "-----------PALINDROMOS-----------\n\n";
	std::cout << "Digite la palabra a comprobar: "; std::getline(std::cin, palabra);
	std::cout << "\n";
}