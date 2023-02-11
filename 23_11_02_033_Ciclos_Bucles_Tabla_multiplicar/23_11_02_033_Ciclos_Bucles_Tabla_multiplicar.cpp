// 23_11_02_033_Ciclos_Bucles_Tabla_multiplicar.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Emma

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int numero;

    do {

        cout << "Dime un numero:"; cin >> numero;
    } while ((numero < 1) || (numero > 10));

    for (int i = 1; i <= 20; i++) {

        cout << numero << "*" << i <<"="<< numero * i << endl;
    }
    cout << "\n\n";
    system("pause");
    return 0;
   
}

