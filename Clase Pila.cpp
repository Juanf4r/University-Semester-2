//Clase Pila de Juan Fernando Aispuro

#include<iostream>
#include<cstdlib>

class Pila 
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

public:
    Pila() 
    {
        cima = nullptr;
    }

    ~Pila() {
        while (!isEmpty()) 
        {
            pop();
        }
    }

    void push(int valor) 
    {
        Nodo* nuevoNodo = new Nodo(valor);
        nuevoNodo->next = cima;
        cima = nuevoNodo;
    }

    void pop() 
    {
        if (isEmpty()) 
        {
            std::cout << "La pila está vacía. No se puede realizar pop()." << "\n";
        }

        Nodo* nodoEliminar = cima;
        cima = cima->next;
        delete nodoEliminar;
    }

    int top() 
    {
        if (isEmpty()) 
        {
            std::cout << "La pila está vacía. No se puede acceder al top()." << "\n";
  
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

    Pila pila;
    pila.push(1);
    pila.push(2);
    pila.push(3);

    std::cout << "Top: " << pila.top() << "\n";
    pila.pop();

    std::cout << "Top: " << pila.top() << "\n";
    pila.pop();

    std::cout << "Top: " << pila.top() << "\n\n";
    pila.pop();

    std::cout << "La pila esta vacia: " << (pila.isEmpty() ? "Si" : "No") << "\n\n";

    system("pause");
    return 0;
}
