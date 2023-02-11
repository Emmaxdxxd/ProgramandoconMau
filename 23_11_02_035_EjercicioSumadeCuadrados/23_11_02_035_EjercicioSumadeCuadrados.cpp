// 23_11_02_035_EjercicioSumadeCuadrados.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int suma = 0, cuadrado;
    for (int i = 1; i <= 10; i++) {
        cuadrado = i * i;
        suma += cuadrado;//suma = suma + cuadrado
     }
    cout << "El resultado de la suma es:"<<suma << endl;

    system("pause");
    return 0;
}
