// 012_01_10_Expresiones_Ejercicio 7.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{
    float practica, teorica, participacion, nota_final = 0;

    std::cout << "dime la nota de practica\n"; std::cin >> practica;
    std::cout << "dime la nota de teorica\n"; std::cin >> teorica;
    std::cout << "dime la nota de participacion\n"; std::cin >> participacion;

    practica  *= 0.30; // practica = practica * 0.30
    teorica  *= 0.60;
    participacion  *= 0.10;

    nota_final = practica + teorica + participacion;

    std::cout << " La nota final es:\n" << nota_final << std::endl;

}


