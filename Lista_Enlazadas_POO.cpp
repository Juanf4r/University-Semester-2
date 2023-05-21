// Lista_Enlazadas_POO.cpp 

#include<iostream>
#include<stdlib.h>
#include<string>

class Nodo
{
public:
    int dato;
    Nodo* next;
};

Nodo* NuevoNodo(int dato, Nodo* next)
{
    Nodo* nodo = new Nodo;
    nodo->dato = dato;
    nodo->next = next;
    return nodo;
}

Nodo* constructlist()
{
    
    Nodo* head = NuevoNodo(1, NuevoNodo(2, NuevoNodo(3, nullptr)));

    return head;
}

void Imprimirlista(Nodo* head)
{
    Nodo* ptr = head;
    while (ptr)
    {
        std::cout << ptr->dato << " -> ";
        ptr = ptr->next;
    }
    std::cout << "nullptr \n\n";
}

int main()
{
    system("CLS");

    Nodo* head = constructlist();

    Imprimirlista(head);

    system("pause");
    return 0;
}