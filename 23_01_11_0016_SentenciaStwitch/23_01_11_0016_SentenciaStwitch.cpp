// 23_01_11_0016_SentenciaStwitch.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{
    int numero;

    std::cout << "dime un numero entre 1-5:\n"; std::cin >> numero;

    switch (numero)
    {
    case 1: std::cout << " es el numero 1"; break;
    case 2: std::cout << " es el numero 2"; break;
    case 3: std::cout << " es el numero 3"; break;
    case 4: std::cout << " es el numero 4"; break;
    case 5: std::cout << " es el numero 5"; break;
    default: std::cout << " No esta en el rango 1-5 >:C" ; break;

    }


}

