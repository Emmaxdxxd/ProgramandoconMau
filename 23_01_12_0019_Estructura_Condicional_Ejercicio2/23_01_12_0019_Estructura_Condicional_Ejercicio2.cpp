// 23_01_12_0019_Estructura_Condicional_Ejercicio2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Emma

#include <iostream>

int main()
{
	int n1, n2, n3;

	std::cout << " Dime tres numeros:\n" << std::endl;
	std::cin >> n1 >> n2 >> n3;

	if (n1==n2 && n1==n3&&n2==n3 )
	{
		std::cout << " Son iwales :o " << std::endl;
	}

	if (n1 > n2 && n1 > n3) {

		std::cout << " Este es mayor \n" << n1;

	}
	else if (n2 > n1 && n2 > n3) {
			std::cout << "Este es mayor\n" << n2;

		}
		else
		{
			std::cout <<" Este es mayor " << n3;

		}
		
	}





