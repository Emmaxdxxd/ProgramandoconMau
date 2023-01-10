// 23_01_09_005_ DatosDeusuario.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{
     int edad;
     char sexo[10];
     float altura;

     std::cout << " dime tu edad :"; std::cin >> edad;
     std::cout << " dime tu sexo :"; std::cin >> sexo;
     std::cout << " dime tu altura :"; std::cin >> altura;

     std::cout << "\nEdad:" << edad << std :: endl;
     std::cout << "sexo:" << sexo << std:: endl;
     std::cout << "altura en metros:" << altura << std::endl;


   
}

