// 008_01_10_Expresiones 2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//emmaaaaaaaaaaaaa

#include <iostream>

int main()
{
	float a,b,c,d,e,f, resultado = 0;

	std::cout << "dime el valor de a:\n";
	std::cin >> a;
	std::cout << "dime el valor de b:\n";
	std::cin >> b;
	std::cout << "dime el valor de c:\n";
	std::cin >> c;
	std::cout << "dime el valor de d:\n";
	std::cin >> d;
	std::cout << "dime el valor de e:\n";
	std::cin >> e;
	std::cout << "dime el valor de d:\n";
	std::cin >> f;
	

	resultado = (a + (b / c)) /(d + (e / f));

	std::cout.precision(2);

	std::cout << "el resultado es: \n" << resultado << std::endl; 








}

