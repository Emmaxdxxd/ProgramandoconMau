// 23_01_12_0019_Estructuras_Condicionales_Ejercicio3.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Emma

#include <iostream>

int main()
{
    int numero;

    std::cout << "Dime un numero:\n"; std::cin >> numero;

    if (numero == 0) {
        std::cout << " El numero es cero";
    }
    else if (numero % 2 == 0) {

        std::cout << " el numero es par";
    }
    else {
        std::cout << " el numero es impar";
    }
}

