// 23_01_09_003_ OperacionesA.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{
    int n1, n2, suma = 0, resta = 0, multiplicacion = 0, division = 0;

    std::cout << "Di un numero \n";
    std::cin >> n1;
    std::cout << "di otro numero :"; 
    std :: cin >> n2;

    suma = n1 + n2;
    resta = n1 - n2;
    multiplicacion = n1 * n2;
    division = n1 / n2;

    std::cout << "La suma es: " << suma << std::endl;
    std::cout << "La resta es: " << resta << std::endl;
    std::cout << "La division es: " << division << std::endl;
    std::cout << "La multipliacion es: " << multiplicacion << std::endl;

} 

