// 23_09_01_006_Expresiones.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{
    float a, b, resultado = 0;

    std::cout << "dame el valor de a:"; std::cin >> a;
    std::cout << "dame el valor de b: "; std::cin >> b;
    resultado = (a / b) + 1;
    std::cout.precision(2);
    std::cout << "\n El resultado es :  " << resultado <<std :: endl;

    return 0;

}

