// 23_01_10_013_ Expresiones_Ejercicio8.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{
    int hipotenusa, C1, C2;




    std::cout << "dime el primer cateto del triangulo rectangulo\n";
    std::cin >> C1;
    std::cout << "dime el segundo cateto del triangulo rectangulo\n";
    std::cin >> C2;

    hipotenusa = (C1 * C1 + (C2 * C2));

    std::cout << "La hipotenusa es:\n" << hipotenusa << std::endl;







}

