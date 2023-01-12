// 23_01_12_0022_Estructura_condicional_Ejercicio5.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Emma

#include <iostream>

int main()
{
    char letra;

    std::cout << " dime un caracter:\n";
    std::cin >> letra;

    switch (letra) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'U': std::cout << " es una vocal minuscula"; break;
    default: std::cout << " NO es una vocal minuscula"; break;




    }
}

