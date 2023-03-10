//Examen Codigos Estudiar

#include<iostream>
#include<stdlib.h>

class Padre
{
protected:

	int Edad = 18;
	char Nombre[20];

public:
	void MostrarEdad()
	{
		std::cout << "Edad: " << Edad << "\n";
	}
};

int main()
{
	Padre Papa;
	Papa.MostrarEdad();

	system("pause");
	return 0;
}