// 23_01_12_0023_Estructura_Condicional_Ejercicio6.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{
	char letra;

	std::cout << " Dime un caracter:\n";
	std::cin >> letra; 
	
	switch(letra){

	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u': std::cout << "Esto es una vocal minuscula :D\n"; break;
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U':std::cout << " Esto es una vocal mayuscula :D\n"; break;
	default: std::cout << " Esto No es una vocal >:C";


	}
	


	}





