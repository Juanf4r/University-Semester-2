//

#include<iostream>
#include<stdlib.h>

class atleta
{
	float Energia;
	float Fuerza;
	float Velocidad;
	char Nombre[20];

public:
	
	//Constructor Generico

	atleta()
	{
		Energia = 100;
		Fuerza = 50;
		Velocidad = 20;
		strcpy_s(Nombre, "Desconocido");
	}
	//Constructor Especifico

	atleta(float e, float f, float v, char n[15])
	{
		Energia = e;
		Fuerza = f;
		Velocidad = v;
		strcpy_s(Nombre, n);
	}
	//El Destructor

	~atleta()
	{
		std::cout << "Atleta: " << Nombre << " Destruido.." << "\n\n";
	}
	//Funciones

	void mostrar()
	{
		std::cout << "Energia: " << Energia << "\n";
		std::cout << "Fuerza: " << Fuerza << "\n";
		
	}

	float getVelocidad()
	{
		return Velocidad;
	}

	void setVelocidad(float v)
	{
		Velocidad = 50;
	}

	float getFuerza()
	{
		return Fuerza;
	}

	void setFuerza(float f)
	{
		Fuerza = 40;
	}

	float getEnergia()
	{
		return Energia;
	}

	void setEnergia(float e)
	{
		Energia = 100;
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

int main()
{
	system("CLS");

	atleta Desconocido;
	Desconocido.mostrar();
	char auxiliar[15] = " ";

	strcpy_s(auxiliar, "Messirve");

	atleta Messi(200, 100, 500, auxiliar);
	Messi.mostrar();

	system("pause");
	return 0;
}