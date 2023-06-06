/* Realizar la implementación de las  4 clases pokemon:

Agua, Planta, Fuego y Electrico

Estas clases deben heredar  los atributos  de la clase pokemon
previamente vista ademas deberan incluir los atributos representativos de cada clase,
tener su constructor por defecto y especifico, métodos set y get para cada atributo nuevo y los
métodos de aumento de temperatura (fuego), tiempo sumergido (agua), caminar (planta) y aumentar voltaje (eléctrico) */

#include<iostream>
#include<stdlib.h>
#include<time.h>

class Pokemon
{
public:

	int Pts_vida;
	int Pts_vida_max;
	int Fuerza_ataque;
	char Nombre[20];

	//Constructor Generico
	Pokemon()
	{
		Pts_vida = 20;
		Pts_vida_max = 0;
		Fuerza_ataque = 3;
		strcpy(Nombre, " ");
	}
	//Constructor Especifico
	Pokemon(int p, int p_max, int f, char n[15])
	{
		Pts_vida = p;
		Pts_vida_max = p_max;
		Fuerza_ataque = f;
		strcpy(Nombre, n);
	}
	//El Destructor
	~Pokemon()
	{
		std::cout << "Pokemon: " << Nombre << " Destruido.." << "\n\n";
	}
	//Funciones
	virtual void mostrar()
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

	int getPtsdeVidaMax()
	{
		return Pts_vida_max;
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
		strcpy(Nombre, n);
	}
};

class Fuego : public Pokemon
{
public:

	int temperatura = 0;

	Fuego()
	{
		temperatura;
	}

	Fuego(int p, int p_max, int f, char n[15], int te)
	{
		Pts_vida = p;
		Pts_vida_max = p_max;
		Fuerza_ataque = f;
		strcpy(Nombre, n);
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

class Agua : public Pokemon
{
public:

	int tiempo_sumergido = 0;

	Agua()
	{
		tiempo_sumergido;
	}

	Agua(int p, int p_max, int f, char n[15], int ts)
	{
		Pts_vida = p;
		Pts_vida_max = p_max;
		Fuerza_ataque = f;
		strcpy(Nombre, n);
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

class Planta : public Pokemon
{
public:

	int caminar = 0;

	Planta()
	{
		caminar;
	}

	Planta(int p, int p_max, int f, char n[15], int ca)
	{
		Pts_vida = p;
		Pts_vida_max = p_max;
		Fuerza_ataque = f;
		strcpy(Nombre, n);
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

class Electrico : public Pokemon
{
public:

	int AumentarVoltaje = 0;

	Electrico()
	{
		AumentarVoltaje;
	}

	Electrico(int p, int p_max, int f, char n[15], int av)
	{
		Pts_vida = p;
		Pts_vida_max = p_max;
		Fuerza_ataque = f;
		strcpy(Nombre, n);
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

int opc_pokemon = 0, opc_1 = 0, pocion = 10;
bool pelea_1 = 0;

int main()
{
	system("CLS");
	Fuego Charmander;
	Agua Squirtle;
	Planta Bulbasaur;
	Electrico Pikachu;

	std::cout << "\tBIENVENIDO A POKEMON\n\n";

	do {
		std::cout << "Selecciona uno de los siguientes pokemons: ";
		std::cout << "\n1.-Charmander\n2.-Bulbasaur\n3.-Squirtle\n4.-Pikachu\n"; std::cin >> opc_pokemon;

		if (opc_pokemon != 1 && opc_pokemon != 2 && opc_pokemon != 3 && opc_pokemon != 4)
		{
			std::cout << "Elige uno de los 4 Pokemons dados\n\n";
		}
	} while (opc_pokemon != 1 && opc_pokemon != 2 && opc_pokemon != 3 && opc_pokemon != 4);

	switch (opc_pokemon)
	{
	case 1: std::cout << "----------Tu eleccion es Charmander!-------------" << std::endl
		<< "----------------Tipo Fuego-----------------------" << std::endl
		<< "-----------------Vida: 20------------------------" << std::endl
		<< "----------------Ataque: 4------------------------" << std::endl;

		std::cout << "\nTe gustaria buscar batalla?\n";
		std::cout << "Ingresa 1 para buscar, 0 para rechazar: \n\n"; std::cin >> pelea_1;

		if (pelea_1 == 1)
		{
			std::cout << "Buscando rival.....\n" << std::endl; 
			std::cout << "Rival encontrado!\n" << std::endl; 
			std::cout << "COMIENZA EL COMBATE\n" << std::endl; 
			std::cout << "Tu rival saca a Bulbasaur!" << std::endl; 
			std::cout << "Decides sacar a Charmander!" << std::endl;
			std::cout << "Que decides hacer?\n\n";

			while (Charmander.Pts_vida >= 0 && Bulbasaur.Pts_vida >= 0)
			{
				std::cout << "1.-Atacar\n";
				std::cout << "2.-Pocion\n";
				std::cout << "3.-Huir\n";
				std::cout << "Tu eleccion es: "; std::cin >> opc_1; std::cout << "\n"; 
				switch (opc_1)
				{
				case 1:


					std::cout << "Charmander ha atacado a Bulbasaur!\n"; 
					std::cout << "Es super eficaz!" << std::endl;

					Charmander.SumarTemperatura();
					if (Charmander.temperatura <= 3)
					{
						Bulbasaur.Pts_vida -= 6 + rand() % (8);
					}
					else
					{
						Bulbasaur.Pts_vida -= 4 + rand() % (6);
					}

					std::cout << "Vida de Bulbasaur: " << Bulbasaur.Pts_vida << std::endl; 
					std::cout << "Bulbasaur ha usado Latigazo Cepa!\n"; 
					std::cout << "No es eficaz..." << std::endl;
					Charmander.Pts_vida -= 2 + rand() % (4);
					std::cout << "Vida de Charmander: " << Charmander.Pts_vida << std::endl << std::endl;
					break;

				case 2:
					std::cout << "Le lanzas una pocion a Charmander!\n"; 
					std::cout << "Charmander ha recuperdado 10 de vida\n";
					if (Charmander.Pts_vida_max - Charmander.Pts_vida > pocion)
					{
						Charmander.Pts_vida += pocion;
					}
					if (Charmander.Pts_vida_max - Charmander.Pts_vida < pocion)
					{
						Charmander.Pts_vida = 20;
					}
					std::cout << "Vida de Charmander: " << Charmander.Pts_vida << std::endl << std::endl; 
					break;

				case 3:

					std::cout << "No se puede huir de un combate!\n\n";
					break;

				default:

					std::cout << "No seleccionaste ninguna de las opciones\n\n";

					break;
				}
			}
			if (Charmander.Pts_vida <= 0)
			{
				std::cout << "Haz perdido el combate, suerte para la proxima :c\n\n" << std::endl;
			}
			else
			{
				std::cout << "Has ganado el combate!, felicidades! :D\n\n" << std::endl;
			}
			break;
		}
		else
		{
			std::cout << "No se hizo nada, :P\n" << std::endl;
		}
		break;
		break;

	case 2:  std::cout << "----------Tu eleccion es Bulbasaur!--------------" << std::endl
		<< "----------------Tipo Planta----------------------" << std::endl
		<< "-----------------Vida: 20------------------------" << std::endl
		<< "----------------Ataque: 4------------------------" << std::endl;

		std::cout << "\nTe gustaria buscar batalla?\n";
		std::cout << "Ingresa 1 para buscar, 0 para rechazar: \n\n"; std::cin >> pelea_1;

		if (pelea_1 == 1)
		{
			std::cout << "Buscando rival.....\n" << std::endl;
			std::cout << "Rival encontrado!\n" << std::endl; 
			std::cout << "COMIENZA EL COMBATE\n" << std::endl; 
			std::cout << "Tu rival saca a Squirtle!" << std::endl; 
			std::cout << "Decides sacar a Bulbasaur!" << std::endl; 
			std::cout << "Que decides hacer?\n\n";

			while (Bulbasaur.Pts_vida >= 0 && Squirtle.Pts_vida >= 0)
			{
				std::cout << "1.-Atacar\n";
				std::cout << "2.-Pocion\n";
				std::cout << "3.-Huir\n";
				std::cout << "Tu eleccion es: "; std::cin >> opc_1; std::cout << "\n"; 
				switch (opc_1)
				{
				case 1:

					std::cout << "Bulbasaur ha atacado a Squirtle!\n";
					std::cout << "Es super eficaz!" << std::endl;

					Bulbasaur.SumarCaminata();

					if (Bulbasaur.caminar <= 3)
					{
						Squirtle.Pts_vida -= 6 + rand() % (8);
					}
					else 
					{
						Squirtle.Pts_vida -= 4 + rand() % (6);
					}

					std::cout << "Vida de Squirtle: " << Squirtle.Pts_vida << std::endl; 
					std::cout << "Squirtle ha usado burbuja!\n"; 
					std::cout << "No es eficaz..." << std::endl;
					Bulbasaur.Pts_vida -= 2 + rand() % (4);


					std::cout << "Vida de Bulbasaur: " << Bulbasaur.Pts_vida << std::endl << std::endl; 
					break;

				case 2:
					std::cout << "Le lanzas una pocion a Bulbasaur!\n"; 
					std::cout << "Bulbasaur ha recuperdado 10 de vida\n";
					if (Bulbasaur.Pts_vida_max - Bulbasaur.Pts_vida > pocion)
					{
						Bulbasaur.Pts_vida += pocion;
					}
					if (Bulbasaur.Pts_vida_max - Bulbasaur.Pts_vida < pocion)
					{
						Bulbasaur.Pts_vida = 20;
					}
					std::cout << "Vida de Bulbasaur: " << Bulbasaur.Pts_vida << std::endl << std::endl;
					break;

				case 3:

					std::cout << "No se puede huir de un combate!\n" << std::endl;
					break;

				default:

					std::cout << "No seleccionaste ninguna de las opciones\n" << std::endl;
					break;
				}
			}
			if (Bulbasaur.Pts_vida <= 0)
			{
				std::cout << "Haz perdido el combate, suerte para la proxima :c\n\n" << std::endl;
			}
			else
			{
				std::cout << "Has ganado el combate!, felicidades! :D\n\n" << std::endl;
			}
			break;
		}
		else
		{
			std::cout << "No se hizo nada, :P\n" << std::endl;
		}
		break;

	case 3: std::cout << "----------Tu eleccion es Squirtle!--------------" << std::endl
		<< "----------------Tipo Agua-----------------------" << std::endl
		<< "-----------------Vida: 20-----------------------" << std::endl
		<< "----------------Ataque: 4----------------------" << std::endl;

		std::cout << "\nTe gustaria buscar batalla?\n";
		std::cout << "Ingresa 1 para buscar, 0 para rechazar: \n\n"; std::cin >> pelea_1;

		if (pelea_1 == 1) {
			std::cout << "Buscando rival.....\n" << std::endl; 
			std::cout << "Rival encontrado!\n" << std::endl; 
			std::cout << "COMIENZA EL COMBATE\n" << std::endl; 
			std::cout << "Tu rival saca a Charmander!" << std::endl; 
			std::cout << "Decides sacar a Squirtle!" << std::endl; 
			std::cout << "Que decides hacer?\n\n";

			while (Squirtle.Pts_vida >= 0 && Charmander.Pts_vida >= 0)
			{
				std::cout << "1.-Atacar\n";
				std::cout << "2.-Pocion\n";
				std::cout << "3.-Huir\n";
				std::cout << "Tu eleccion es: "; std::cin >> opc_1; std::cout << "\n"; 
				switch (opc_1)
				{
				case 1:

					Squirtle.SumarTiempoSumergido();

					if (Squirtle.tiempo_sumergido <= 3)
					{
						Charmander.Pts_vida -= 6 + rand() % (8);
					}
					else
					{
						Charmander.Pts_vida -= 4 + rand() % (6);
					}

					std::cout << "Vida de Charmander: " << Charmander.Pts_vida << std::endl; 
					std::cout << "Charmander ha usado Ascuas!\n"; 
					std::cout << "No es eficaz..." << std::endl;
					Squirtle.Pts_vida -= 2 + rand() % (4);
					std::cout << "Vida de Squirtle: " << Squirtle.Pts_vida << std::endl << std::endl; 
					break;

				case 2:
					std::cout << "Le lanzas una pocion a Squirtle!\n"; 
					std::cout << "Squirtle ha recuperdado 10 de vida\n";
					if (Squirtle.Pts_vida_max - Squirtle.Pts_vida > pocion)
					{
						Squirtle.Pts_vida += pocion;
					}
					if (Squirtle.Pts_vida_max - Squirtle.Pts_vida < pocion)
					{
						Squirtle.Pts_vida = 20;
					}
					std::cout << "Vida de Squirtle: " << Squirtle.Pts_vida << std::endl << std::endl; 
					std::cout << "Charmander ha usado Ascuas!\n"; 
					std::cout << "No es eficaz..." << std::endl;
					Squirtle.Pts_vida -= 2 + rand() % (6);
					std::cout << "Vida de Squirtle: " << Squirtle.Pts_vida << std::endl << std::endl;
					break;

				case 3:

					std::cout << "No se puede huir de un combate!\n" << std::endl;
					break;

				default:

					std::cout << "No seleccionaste ninguna de las opciones\n" << std::endl;
					break;
				}
			}
			if (Squirtle.Pts_vida <= 0)
			{
				std::cout << "Haz perdido el combate, suerte para la proxima :c\n\n" << std::endl;
			}
			else
			{
				std::cout << "Has ganado el combate!, felicidades! :D\n\n" << std::endl;
			}
			break;
		}
		else
		{
			std::cout << "No se hizo nada, :P\n" << std::endl;
		}
		break;
		break;

	case 4: std::cout << "----------Tu eleccion es Pikachu!--------------" << std::endl
		<< "----------------Tipo Electrico-----------------------" << std::endl
		<< "-----------------Vida: 20-----------------------" << std::endl
		<< "----------------Ataque: 4----------------------" << std::endl;

		std::cout << "\nTe gustaria buscar batalla?\n";
		std::cout << "Ingresa 1 para buscar, 0 para rechazar: \n\n"; std::cin >> pelea_1;

		if (pelea_1 == 1) {
			std::cout << "Buscando rival.....\n" << std::endl; 
			std::cout << "Rival encontrado!\n" << std::endl; 
			std::cout << "COMIENZA EL COMBATE\n" << std::endl; 
			std::cout << "Tu rival saca a Squirtle!" << std::endl; 
			std::cout << "Decides sacar a Pikachu!" << std::endl; 
			std::cout << "Que decides hacer?\n\n";

			while (Pikachu.Pts_vida >= 0 && Squirtle.Pts_vida >= 0)
			{
				std::cout << "1.-Atacar\n";
				std::cout << "2.-Pocion\n";
				std::cout << "3.-Huir\n";
				std::cout << "Tu eleccion es: "; std::cin >> opc_1; std::cout << "\n";
				switch (opc_1)
				{
				case 1:

					std::cout << "Pikachu ha usado Rayo!\n"; 
					std::cout << "Es super eficaz!" << std::endl;

					Pikachu.SumarAumentarVoltaje();

					if (Pikachu.AumentarVoltaje <= 3)
					{
						Squirtle.Pts_vida -= 6 + rand() % (8);
					}
					else
					{
						Squirtle.Pts_vida -= 4 + rand() % (6);
					}

					std::cout << "Vida de Squirtle: " << Squirtle.Pts_vida << std::endl; 
					std::cout << "Squirtle ha usado burbuja!\n"; 
					std::cout << "No es eficaz..." << std::endl;
					Pikachu.Pts_vida -= 2 + rand() % (4);
					std::cout << "Vida de Pikachu: " << Pikachu.Pts_vida << std::endl << std::endl; 
					break;

				case 2:
					std::cout << "Le lanzas una pocion a Pikachu!\n"; 
					std::cout << "Pikachu ha recuperdado 10 de vida\n";
					if (Pikachu.Pts_vida_max - Pikachu.Pts_vida > pocion)
					{
						Pikachu.Pts_vida += pocion;
					}
					if (Pikachu.Pts_vida_max - Pikachu.Pts_vida < pocion)
					{
						Pikachu.Pts_vida = 20;
					}
					std::cout << "Vida de Pikachu: " << Pikachu.Pts_vida << std::endl << std::endl; 
					std::cout << "Squirtle ha usado burbuja!!\n"; 
					std::cout << "No es eficaz..." << std::endl;
					Pikachu.Pts_vida -= 2 + rand() % (4);
					std::cout << "Vida de Pikachu: " << Pikachu.Pts_vida << std::endl << std::endl; 
					break;

				case 3:

					std::cout << "No se puede huir de un combate!\n" << std::endl;
					break;

				default:

					std::cout << "No seleccionaste ninguna de las opciones\n" << std::endl;
					break;
				}
			}
			if (Pikachu.Pts_vida <= 0)
			{
				std::cout << "Haz perdido el combate, suerte para la proxima :c\n\n" << std::endl;
			}
			else
			{
				std::cout << "Has ganado el combate!, felicidades! :D\n\n" << std::endl;
			}
			break;
		}
		else
		{
			std::cout << "No se hizo nada, :P\n" << std::endl;
		}
		break;
		break;

	default: std::cout << "ERROR AL ELEGIR POKEMON...\n"; break;
	}

	system("pause");
	return 0;
}