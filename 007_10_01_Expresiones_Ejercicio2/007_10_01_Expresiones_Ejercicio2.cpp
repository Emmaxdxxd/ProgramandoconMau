// 007_10_01_Expresiones_Ejercicio2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{
    int a, n, c, b, resultado = 0;

    std::cout << "dime el primer numero:\n";
    std::cin >> a;
    std::cout << "dime el segundo numero:\n";
    std::cin >>n;
    std::cout << "dime el tercer numero:\n";
    std::cin >> c;
    std::cout << "dime el cuarto numero:\n";
    std::cin >> b;
    resultado = (a + n) / (c + b);


    std::cout << "El resultado es:" << resultado << std::endl;
 
}

