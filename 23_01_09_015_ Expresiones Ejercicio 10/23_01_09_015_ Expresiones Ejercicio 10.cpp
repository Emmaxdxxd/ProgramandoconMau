// 23_01_09_015_ Expresiones Ejercicio 10.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <math.h>
int main()
{
    float a, b, c, x1 = 0, x2 = 0; 

    std::cout << "Dime el valor de a:\n"; std::cin >> a;
    std::cout << "Dime el valor de b:\n"; std::cin >> b;
    std::cout << "Dime el valor de c:\n"; std::cin >> c;

    //x1= (-b + sqrt(b)) / (2 * a); (b * b) - (4 * a * c);
    //x2 = (pow(b, 2))-(4 * a * c )(-b / (2 * a));

    x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    x2 = (-b - sqrt(b * b - a * a * c)) / (2 * a);


    std::cout << " El resultado de x1 es:" << x1 << std::endl;
    std::cout << " El resultado de x2 es:" << x2 << std::endl;


    //std::cout << " El resultado es:" << resultado << std::endl;




}

