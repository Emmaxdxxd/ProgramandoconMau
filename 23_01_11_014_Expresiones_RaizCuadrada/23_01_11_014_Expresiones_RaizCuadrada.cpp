// 23_01_11_014_Expresiones_RaizCuadrada.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Emma

#include <iostream>
#include <math.h>
int main()
{
    float x, y, resultado = 0;

    std::cout << "Dime el valor de X:\n"; std::cin >> x;
    std::cout << "Dime el valor de Y:\n"; std::cin >> y;

    resultado = (sqrt(x)) / (pow(y,2) - 1);

    std::cout << " El resultado es:\n" << resultado << std::endl;


}

