// 23_09_02_028_Condicionales_Cajero.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>


using namespace std;
int main()
{
    int saldo_inicial = 1000, opc;
    float extra, saldo = 0, retiro;

    cout << "\tBienvenido a tu cajero virtual" << endl;
    cout << "\t1. Ingresar dinero en cuenta";
    cout << "\t2. Retirar dinero de cuenta";
    cout << "\t3. Salir"; 
    cout << "\tOpcion:";
    cin >> opc;

    switch (opc) {

    case 1:cout<< "Digite la cantidad de dinero a ingresar\t";
        cin >> extra;
        saldo = saldo_inicial + extra;
        cout << "dinero en cuenta\t" << saldo; break;

    case 2: cout << " Digite la cantidad de dinero a retirar\n";
        cin >> retiro;
        if (retiro > saldo_inicial) {

            cout<< "NO tiene esa cantidad de dinero";

      }
        else {
            
            retiro <= saldo_inicial;
        

            cout << "Dinero el cuenta\t" << saldo;
        }
    case 3: break;

    }




}
