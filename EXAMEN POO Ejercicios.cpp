/*Realizar un programa que defina una clase persona con los atributos: nombre, apellido y
edad. Definir una clase Alumno (con un carnet) y una clase Profesor (con una materia),
ambas heredan de Persona. Crear 4 objetos (2 alumnos y 2 profesores) y guardarlos en
un vector. Luego, se deben mostrar los datos de todas las personas ingresadas en el
vector.*/

#include<iostream>
#include<stdlib.h>

class persona
{
public:
	char nombre[10] = " ";
	char apellido[10] = " ";
	int edad = 0;

	persona()
	{
		nombre;
		apellido;
		edad;
	}

	persona(char n[10], char a[], int e)
	{
		strcpy_s(nombre, n);
		strcpy_s(apellido, a);
		edad = e;
	}

	~persona()
	{
		std::cout << "La clase Persona ha sido destruida\n\n";
	}
};

class alumnos : public persona
{
public:
	
	alumnos()
	{
		
	}

	alumnos(char n[10], char a[], int e)
	{
		strcpy_s(nombre, n);
		strcpy_s(apellido, a);
		edad = e;
	}
	~alumnos()
	{
		std::cout << "La clase Alumnos ha sido destruida\n\n";
	}

	void carnet()
	{
		
	}
};

class profesores : public persona
{
public:
	char materia[13];

	profesores()
	{
		strcpy_s(materia,"matematicas");
	}

	profesores(char n[10], char a[], int e,int s, char m[13])
	{
		strcpy_s(nombre, n);
		strcpy_s(apellido, a);
		edad = e;
		strcpy_s(materia, m);
	}
	~profesores()
	{
		std::cout << "La clase Profesores ha sido destruida\n\n";
	}
};
	
char setMateria()
{
	strcpy_s(materia, "matematicas");
}

int main()
{
	system("CLS");

	
	persona* Alumnos = new persona[2];
	persona* Profesores = new persona[2];
	
	for (int i = 0; i < 2; i++)
	{
		std::cout << "Nombre del Alumno: " << Alumnos[i].nombre;
		std::cout << "Apellido del Alumno: " << Alumnos[i].apellido;
		std::cout << "Edad del Alumno: " << Alumnos[i].edad;
		std::cout << "Datos del Carnet: ";

		std::cout << "Nombre del Profesor: " << Profesores[i].nombre;
		std::cout << "Apellido del Alumno: " << Profesores[i].apellido;
		std::cout << "Edad del Alumno: " << Profesores[i].edad;
		std::cout << "Materia: " << Profesores[i];
	}

	system("pause");
	return 0;
}

