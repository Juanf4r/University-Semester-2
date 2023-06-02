//Lista Dinámica Generica usando solo Nodos de Juan Fernando Aispuro

#include <iostream>
#include <cstdlib>

int num1 = 1;
double num2 = 2.5;
char letra = 'A';

class Nodo 
{
public:

    void* dato;
    Nodo* next;

    Nodo(void* valor) 
    {
        dato = valor;
        next = nullptr;
    }
};

class Lista 
{
private:
    Nodo* head;
    int longitud;

public:
    Lista() 
    {
        head = nullptr;
        longitud = 0;
    }

    ~Lista() 
    {
        Nodo* actual = head;
        while (actual) 
        {
            Nodo* next = actual->next;
            delete actual;
            actual = next;
        }
    }

    void agregarElemento(void* valor) 
    {
        Nodo* nuevoNodo = new Nodo(valor);
        if (head == nullptr) 
        {
            head = nuevoNodo;
        }
        else 
        {
            Nodo* actual = head;
            while (actual->next)
            {
                actual = actual->next;
            }
            actual->next = nuevoNodo;
        }
        longitud++;
    }

    void imprimirLista() 
    {
        Nodo* actual = head;
        while (actual) 
        {
            std::cout << *(reinterpret_cast<int*>(actual->dato)) << " ";
            actual = actual->next;
        }
        std::cout << "\n";
    }
};

int main() 
{
    system("CLS");

    Lista lista;
    lista.agregarElemento(&num1);
    lista.agregarElemento(&num2);
    lista.agregarElemento(&letra);
    lista.imprimirLista();
    system("pause");

    return 0;
}