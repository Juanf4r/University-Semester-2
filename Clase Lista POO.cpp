#include<iostream>
#include<cstdlib>

class Nodo 
{
public:
    int dato;
    Nodo* siguiente;

    Nodo(int valor) 
    {
        dato = valor;
        siguiente = nullptr;
    }
};

class Lista 
{
private:
    Nodo* cabeza;
public:
    Lista() 
    {
        cabeza = nullptr;
    }

    void insertarAlPrincipio(int valor) 
    {
        Nodo* nuevoNodo = new Nodo(valor);
        if (cabeza == nullptr) 
        {
            cabeza = nuevoNodo;
        }
        else 
        {
            nuevoNodo->siguiente = cabeza;
            cabeza = nuevoNodo;
        }
        std::cout << "Se inserto el elemento " << valor << " al principio de la lista." << "\n";
    }

    void insertarAlFinal(int valor) 
    {
        Nodo* nuevoNodo = new Nodo(valor);
        if (cabeza == nullptr) 
        {
            cabeza = nuevoNodo;
        }
        else 
        {
            Nodo* actual = cabeza;
            while (actual->siguiente != nullptr) 
            {
                actual = actual->siguiente;
            }
            actual->siguiente = nuevoNodo;
        }
        std::cout << "Se inserto el elemento " << valor << " al final de la lista." << "\n";
    }

    void mostrarLista() {
        if (cabeza == nullptr) 
        {
            std::cout << "La lista está vacia." << "";
        }
        else 
        {
            std::cout << "\nElementos de la lista: ";
            Nodo* actual = cabeza;
            while (actual != nullptr) 
            {
                std::cout << actual->dato << " ";
                actual = actual->siguiente;
            }
            std::cout << "\n\n";
        }
    }

    void borrarLista() 
    {
        Nodo* actual = cabeza;
        while (actual != nullptr) 
        {
            Nodo* siguiente = actual->siguiente;
            delete actual;
            actual = siguiente;
        }
        cabeza = nullptr;
        std::cout << "La lista ha sido borrada." << "\n\n";
    }

    void eliminarElemento(int valor) 
    {
        if (cabeza == nullptr) 
        {
            std::cout << "La lista esta vacia. No se puede eliminar ningún elemento." << "\n\n";
            return;
        }
        if (cabeza->dato == valor) 
        {
            Nodo* nodoAEliminar = cabeza;
            cabeza = cabeza->siguiente;
            delete nodoAEliminar;
            std::cout << "Se elimino el elemento " << valor << " de la lista." << "\n\n";
            return;
        }

        Nodo* actual = cabeza;
        while (actual->siguiente != nullptr) 
        {
            if (actual->siguiente->dato == valor) 
            {
                Nodo* nodoAEliminar = actual->siguiente;
                actual->siguiente = actual->siguiente->siguiente;
                delete nodoAEliminar;
                std::cout << "Se elimino el elemento " << valor << " de la lista." << "\n\n";
                return;
            }
            actual = actual->siguiente;
        }
        std::cout << "El elemento " << valor << " no se encontro en la lista." << "\n\n";
    }

    void insertarAntesDespues(int datoExistente, int valor, bool antes) 
    {
        if (cabeza == nullptr) 
        {
            std::cout << "La lista esta vacia. No se puede insertar antes o despues de ningun elemento." << "\n\n";
        }

        if (cabeza->dato == datoExistente) 
        {
            Nodo* nuevoNodo = new Nodo(valor);
            if (antes) 
            {
                nuevoNodo->siguiente = cabeza;
                cabeza = nuevoNodo;
            }
            else 
            {
                nuevoNodo->siguiente = cabeza->siguiente;
                cabeza->siguiente = nuevoNodo;
            }
            std::cout << "Se inserto el elemento " << valor << " " << (antes ? "antes" : "despues") << " del elemento " << datoExistente << "." << "\n\n";
        }

        Nodo* actual = cabeza;
        while (actual->siguiente != nullptr)
        {
            if (actual->siguiente->dato == datoExistente)
            {
                Nodo* nuevoNodo = new Nodo(valor);
                if (antes)
                {
                    nuevoNodo->siguiente = actual->siguiente;
                    actual->siguiente = nuevoNodo;
                }
                else
                {
                    nuevoNodo->siguiente = actual->siguiente->siguiente;
                    actual->siguiente->siguiente = nuevoNodo;
                }
                std::cout << "Se inserto el elemento " << valor << " " << (antes ? "antes" : "despues") << " del elemento " << datoExistente << "." << "\n\n";
            }
            actual = actual->siguiente;
        }
        std::cout << "El elemento " << datoExistente << " no se encontro en la lista. No se realizo ninguna insercion." << "\n";
    }
};

int main() 
{
    system("CLS");

    Lista lista;
    lista.insertarAlPrincipio(10);
    lista.insertarAlPrincipio(5);
    lista.insertarAlFinal(15);
    lista.insertarAlFinal(20);
    lista.mostrarLista();

    lista.eliminarElemento(5);
    lista.eliminarElemento(15);
    lista.eliminarElemento(25);
    lista.mostrarLista();

    lista.insertarAntesDespues(10, 7, true);
    lista.insertarAntesDespues(20, 25, false);
    lista.insertarAntesDespues(30, 40, true);
    lista.mostrarLista();

    lista.borrarLista();
    lista.mostrarLista();

    system("pause");
    return 0;
}