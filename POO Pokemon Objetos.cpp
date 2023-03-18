/* Realizar el Código en C++ para crear una clase del tipo Pokemon, los atributos de la clase son:

Nombre,Puntos de Vida, Fuerza de Ataque, Tipo de Pokemon

Los métodos a Programar son:

Metodos Setter para todos los atributos

Métodos Getter para todos los atributos:

Mostrar Caracteristicas

Constructores por defecto y especificos

y destructor*/

#include<iostream>
#include<stdlib.h>

class Pokemon
{
	int Pts_vida;
	int Fuerza_ataque;
	char Tipo_Pokemon[20];
	char Nombre[20];

public:
	//Constructor Generico

	Pokemon()
	{
		Pts_vida = 20;
		Fuerza_ataque = 3;
		strcpy_s(Tipo_Pokemon, "Electrico");
		strcpy_s(Nombre, "Pikachu");
	}
	//Constructor Especifico

	Pokemon(int p, int f, char t[15], char n[15])
	{
		Pts_vida = p;
		Fuerza_ataque = f;
		strcpy_s(Tipo_Pokemon, t);
		strcpy_s(Nombre, n);
	}
	//El Destructor

	~Pokemon()
	{
		std::cout << "Pokemon: " << Nombre << " Destruido.." << "\n\n";
	}
	//Funciones

	void mostrar()
	{
		std::cout << "Nombre: " << Nombre << "\n";
		std::cout << "Tipo de Pokemon: " << Tipo_Pokemon << "\n";
		std::cout << "Puntos de vida: " << Pts_vida << "\n";
		std::cout << "Fuerza de ataque: " << Fuerza_ataque << "\n";
	}

	int getPtsdeVida()
	{
		return Pts_vida;
	}

	void setPtsdeVida(int p)
	{
		Pts_vida = 20;
	}

	float getFuerza()
	{
		return Fuerza_ataque;
	}

	void setFuerza(float f)
	{
		Fuerza_ataque = 3;
	}

	char* getNombre()
	{
		return Nombre;
	}

	void setNombre(char n[15])
	{
		strcpy_s(Nombre, n);
	}
	char* getTipoPokemon()
	{
		return Tipo_Pokemon;
	}

	void setTipoPokemon(char t[15])
	{
		strcpy_s(Tipo_Pokemon, t);
	}
};

int main()
{
	system("CLS");

	Pokemon Pikachu;
	Pikachu.mostrar(); std::cout << "\n\n";

	char auxiliar[15] = " ";
	char auxiliar2[15] = " ";
	strcpy_s(auxiliar, "Charmander");
	strcpy_s(auxiliar2, "Fuego");

	Pokemon Charmander(20, 4, auxiliar2, auxiliar);

	Charmander.mostrar(); std::cout << "\n\n";

	system("pause");
	return 0;
}