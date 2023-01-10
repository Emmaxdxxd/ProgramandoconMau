// 010_01_10_ Expresiones_IntercambiodeValores.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{
    int x, y, aux;

    std::cout << "dime el valor de X:\n";
    std::cin >> x;
    std::cout << "dime el valor de Y:\n";  
    std::cin >> y;
    /*
     x= 10
     y=5
     */
    aux= x;
    x=y;
    y=aux;
    
    std::cout << " el nuevo valor de X es:\n" << x << std::endl;
    std::cout << " el nuevo valor de Y es:\n" << y << std::endl;
 
}

