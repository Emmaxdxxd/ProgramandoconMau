// 23_09_02_029_EstructurasCondicionales_Ejercicio 12.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;
int main()
{
    int numero,opc;

    cout << "\t Menu"<<endl;
    cout << "\n Eliga una opcion"<<endl;
    cout << "\n 1. Cubo de un numero";
    cout << "\n 2. Numero par o impar";
    cout << "\n 3. Salir"<< endl;
    cin >> opc;


    switch (opc){

    case 1: cout << "Dime un numero"<<endl;
        cin >> numero;
      
        numero = numero * numero * numero;

        cout << "El cubo de el numero es:" << numero << endl; break;

    case 2: cout << "Dime un numero" << endl;
        cin >> numero;

        if (numero % 2 == 0) {

            cout << "Tu numero es par"; break;

        }
        else (numero % 2 == 1)
            ; {

            cout << "Tu numero es impar"; break;

        }
    case 3: cout << "bai"; break;

        
    }


   



}
