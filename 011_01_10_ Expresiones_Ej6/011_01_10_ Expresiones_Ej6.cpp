// 011_01_10_ Expresiones_Ej6.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Emma 

#include <iostream>

int main()
{
	float n1, n2, n3, n4, resultado;

	std::cout << " dime la nota final de el primer alumno:\n"; std::cin >> n1;
	std::cout << " dime la nota final de el primer alumno:\n"; std::cin >> n2;
	std::cout << " dime la nota final de el primer alumno:\n"; std::cin >> n3;
	std::cout << " dime la nota final de el primer alumno:\n"; std::cin >> n4;
		
	resultado = ((n1 + n2 + n3 + n4) / 4);
		
	std::cout << "La media es:" << resultado << std::endl;

		
}

