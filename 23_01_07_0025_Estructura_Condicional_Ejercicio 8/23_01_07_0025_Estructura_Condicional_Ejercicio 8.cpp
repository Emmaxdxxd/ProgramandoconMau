// 23_01_07_0025_Estructura_Condicional_Ejercicio 8.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Emma

#include <iostream>

int main()
{
    int n1,n2,n3,n4;

    std::cout << " Dime 3 numeros porfi :D\n";
    std::cin >> n1;
    std::cin >> n2;
    std::cin >> n3;
    std::cout << " Dime un cuarto numero :)\n";
    std::cin >> n4;

    if (n4==n1)
    {
        std::cout << "El numero coincide con uno de los numeros introducidos anteriormente :D\n";
    }
    else if (n4 == n2)
    {

        std::cout << "El numero coincide con uno de los numeros introducidos anteriormente :D\n";
    }
    else if (n4 == n3)
    
    {

        std::cout << "El numero coincide con uno de los numeros introducidos anteriormente :D\n";
      }
    else  
    {

        std::cout << "El numero NO coincide con ninguno de los numeros introducidos anteriormente :l\n";
      
    }


}

