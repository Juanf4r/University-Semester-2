/* Realizar la implementación de las  4 clases pokemon:

Agua, Planta, Fuego y Electrico

Estas clases deben heredar  los atributos  de la clase pokemon
previamente vista ademas deberan incluir los atributos representativos de cada clase,
tener su constructor por defecto y especifico, métodos set y get para cada atributo nuevo y los
métodos de aumento de temperatura (fuego), tiempo sumergido (agua), caminar (planta) y aumentar voltaje (eléctrico) */

#include<iostream>
#include<stdlib.h>

class Pokemon
{
public:

	int Pts_vida;
	int Fuerza_ataque;
	char Nombre[20];

	//Constructor Generico

	Pokemon()
	{
		Pts_vida = 20;
		Fuerza_ataque = 3;
		strcpy_s(Nombre, " ");
	}
	//Constructor Especifico

	Pokemon(int p, int f, char n[15])
	{
		Pts_vida = p;
		Fuerza_ataque = f;
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

	int getFuerza()
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
};

class Tipo_pokemon : public Pokemon
{
public:

	char Tipo[15] = " ";

	Tipo_pokemon()
	{
		Tipo;
	}

	Tipo_pokemon(int p, int f, char n[15], char t[15])
	{
		Pts_vida = p;
		Fuerza_ataque = f;
		strcpy_s(Nombre, n);
		strcpy_s(Tipo, t);
	}
	~Tipo_pokemon()
	{
		std::cout << "La clase Tipo_pokemon ha sido destruido.." << "\n\n";
	}
};

class Fuego : public Tipo_pokemon
{
public:

	int temperatura = 0;

	Fuego()
	{
		temperatura;
	}

	Fuego(int p, int f, char n[15], char t[15], int te)
	{
		Pts_vida = p;
		Fuerza_ataque = f;
		strcpy_s(Nombre, n);
		strcpy_s(Tipo, t);
		temperatura = te;
	}

	~Fuego()
	{
		std::cout << "La clase Fuego ha sido destruido.." << "\n\n";
	}

	int getTemperatura()
	{
		return temperatura;
	}
	void setTemperatura()
	{
		temperatura = 0;
	}
	void SumarTemperatura()
	{
		temperatura++;
	}
};

class Agua : public Tipo_pokemon
{
public:

	int tiempo_sumergido = 0;

	Agua()
	{
		tiempo_sumergido;
	}

	Agua(int p, int f, char n[15], char t[15], int ts)
	{
		Pts_vida = p;
		Fuerza_ataque = f;
		strcpy_s(Nombre, n);
		strcpy_s(Tipo, t);
		tiempo_sumergido = ts;
	}
	~Agua()
	{
		std::cout << "La clase Agua ha sido destruido.." << "\n\n";
	}

	int getTiempoSumergido()
	{
		return tiempo_sumergido;
	}
	void setTiempoSumergido()
	{
		tiempo_sumergido = 0;
	}
	void SumarTiempoSumergido()
	{
		tiempo_sumergido++;
	}
};

class Planta : public Tipo_pokemon
{
public:

	int caminar = 0;

	Planta()
	{
		caminar;
	}

	Planta(int p, int f, char n[15], char t[15], int ca)
	{
		Pts_vida = p;
		Fuerza_ataque = f;
		strcpy_s(Nombre, n);
		strcpy_s(Tipo, t);
		caminar = ca;
	}
	~Planta()
	{
		std::cout << "La clase Planta ha sido destruido.." << "\n\n";
	}

	int getCaminar()
	{
		return caminar;
	}
	void setCaminar()
	{
		caminar = 0;
	}
	void SumarCaminata()
	{
		caminar++;
	}
};

class Electrico : public Tipo_pokemon
{
public:

	int AumentarVoltaje = 0;

	Electrico()
	{
		AumentarVoltaje;
	}

	Electrico(int p, int f, char n[15], char t[15], int av)
	{
		Pts_vida = p;
		Fuerza_ataque = f;
		strcpy_s(Nombre, n);
		strcpy_s(Tipo, t);
		AumentarVoltaje = av;
	}
	~Electrico()
	{
		std::cout << "La clase Electrico ha sido destruido.." << "\n\n";
	}

	int getAumentarVoltaje()
	{
		return AumentarVoltaje;
	}
	void setAumentarVoltajeo()
	{
		AumentarVoltaje = 0;
	}
	void SumarAumentarVoltaje()
	{
		AumentarVoltaje++;
	}
};

void Charmander()
{

}

void Squirtle()
{

}

void Bulbasaur()
{

}

void Pikachu()
{

}

int main()
{
	int opc;

	system("CLS");
		std::cout << "\tBIENVENIDO A POKEMON\n\n";

			do{
				std::cout << "Selecciona uno de los siguientes pokemons: ";
				std::cout << "\n1.-Charmander\n2.-Squirtle\n3.-Bulbasaur\n4.-Pikachu\n"; std::cin >> opc;

				if (opc == 0)
				{
					std::cout<< "Elige uno de los 4 Pokemons dados\n\n";
				}
			} while (opc != 1 && opc != 2 && opc != 3 && opc != 4);

	switch (opc)
	{
		case 1: Charmander();
		case 2: Squirtle();
		case 3: Bulbasaur();
		case 4: Pikachu();
	}

	system("pause");
	return 0;
}