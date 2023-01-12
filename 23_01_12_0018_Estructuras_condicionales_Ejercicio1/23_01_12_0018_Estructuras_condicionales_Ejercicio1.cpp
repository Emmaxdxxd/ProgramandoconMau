// 23_01_11_017_ EstructuraCondicionales Ejercicio 1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Emma

#include <iostream>

int main()


{
    int n1, n2;
    std::cout << " dime 2 numeros:";
    std::cin >> n1 >> n2;


    if (n1 == n2) {

        std::cout << " Ambos numeros son iguales:";
    }
    else
        if (n1 > n2) {
            std::cout << " El mayor es:" << n1 << std::endl;





        }
        else {

            std::cout << " El mayor es:" << n2 << std::endl;
        }

