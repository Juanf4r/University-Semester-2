//Clase Fila de Juan Fernando Aispuro Sanchez

#include<iostream>
#include<cstdlib>

class Fila 
{
private:
    class Nodo 
    {
    public:
        int dato;
        Nodo* next;

        Nodo(int valor) 
        {
            dato = valor;
            next = nullptr;
        }
    };

    Nodo* cima;
    Nodo* final;

public:
    Fila() 
    {
        cima = nullptr;
        final = nullptr;
    }

    ~Fila() 
    {
        while (!isEmpty()) 
        {
            pop();
        }
    }

    void push(int valor) 
    {
        Nodo* nuevoNodo = new Nodo(valor);
        if (isEmpty()) 
        {
            cima = nuevoNodo;
            final = nuevoNodo;
        }
        else 
        {
            final->next = nuevoNodo;
            final = nuevoNodo;
        }
    }

    void pop() 
    {
        if (isEmpty()) 
        {
            std::cout << "La fila está vacía. No se puede realizar pop()." << std::endl;
            return;
        }
        Nodo* nodoEliminar = cima;
        cima = cima->next;
        delete nodoEliminar;

        if (cima == nullptr)
        {
            final = nullptr;
        }
    }

    int front() 
    {
        if (isEmpty()) 
        {
            std::cout << "La fila está vacía. No se puede acceder al front()." << std::endl;
        }
        return cima->dato;
    }

    bool isEmpty() 
    {
        return cima == nullptr;
    }
};

int main() 
{
    system("CLS");

    Fila fila;
    fila.push(1);
    fila.push(2);
    fila.push(3);

    std::cout << "Front: " << fila.front() << std::endl;
    fila.pop();

    std::cout << "Front: " << fila.front() << std::endl;
    fila.pop();

    std::cout << "Front: " << fila.front() << std::endl;
    fila.pop();

    std::cout << "La fila está vacía: " << (fila.isEmpty() ? "Sí" : "No") << std::endl;

    system("pause");
    return 0;
}