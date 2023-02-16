// 23_15_02_036_Estructuras_Repetitivas_Ejercicio4.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
	float temperatura, media = 0, alta = -9999, baja = 9999;
	int i = 4;
	cout << "\tA continuacion la medida de la temperatura." << endl;
	for (int hora = 4; i <= 24; i + 4) {
		if (hora) {
			cout << "Hora: " << i << ":00" << endl;
			cout << "Temperatura: " << endl; cin >> temperatura;
			i += hora;
			media += temperatura;
			if (temperatura > alta) {
				alta = temperatura;
			}
			if (temperatura < baja) {
				baja = temperatura;
			}
		}
	}
	cout << "La temperatura mas alta fue: " << alta << " C" << endl;
	cout << "La temperatura mas baja fue: " << baja << " C" << endl;
	cout.precision(3);
	cout << "La temperatura media fue: " << media / 6 << " C" << endl;
	system("pause");
}