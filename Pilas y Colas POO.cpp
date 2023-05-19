/*ACt. Pilas y Colas en C++.
Tienen que ser con Punteros y Dinamicas, tu eliges cuantos elementos quieres */

#include<iostream>
#include<cstdlib>
#include<queue>

std::queue<int> cola;

int main()
{
	system("CLS");

    cola.push(1);
    cola.push(2);
    std::cout << cola.size() << '\n';
    cola.pop();
    std::cout << cola.size() << '\n';
    cola.push(1); 
    cola.push(3);
    std::cout << cola.front() << '\n';
    cola.pop();
    cola.pop();
    if (cola.empty()) 
    {
        std::cout << "La cola no tiene elementos\n";
    } 
    else 
    {
        std::cout << "La cola tiene " << cola.size() <<" elementos\n";
    } 
       
	system("pause");
	return 0;
}