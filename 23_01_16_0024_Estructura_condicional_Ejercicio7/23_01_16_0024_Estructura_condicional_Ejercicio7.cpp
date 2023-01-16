// 23_01_16_0024_Estructura_condicional_Ejercicio7.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Emma

#include <iostream>

int main()
{
    int edad;

    std::cout << "Dime tu edad :\n";
    std::cin >> edad;

    if ((edad >= 18) && (edad <= 25))
    {
        std::cout << "Tu edad esta en el rango de 18-25  :)";
    }
    else
    
    {
        std::cout << " Tu edad es:" << edad << std::endl;
    }
    return 0;
}