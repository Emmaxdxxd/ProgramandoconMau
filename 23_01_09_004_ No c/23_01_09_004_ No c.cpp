// 23_01_09_004_ No c.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// escribe un programa que lea de la entrada estandar el precio de un producto y muestre en la salida estandar 
//el precio del producto al aplicarle el IVA

#include <iostream>

int main()
{
	float p1;

	std::cout << " cuanto cuestan las papas\n";
	std::cin >> p1;
	p1 = p1 * 1.16;
	std::cout << " El precio de las papas con el Iva es :" << p1 << std::endl;






}

