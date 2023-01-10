// 009_01_10_expresionesEj4.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Emma

#include <iostream>

int main()
{
    int a, b, c, d, resultado = 0;


    std::cout << "Dime el primer numero:\n";  std::cin >> a;
    std::cout << "Dime el segundo numero:\n"; std::cin >> b;
    std::cout << "Dime el tercero numero:\n"; std::cin >> c;
    std::cout << "Dime el cuarto numero:\n";  std::cin >> d;

    resultado = (a + b / (c - d));

    std::cout << " resultado : \n" << resultado << std::endl;

   




}

