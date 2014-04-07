#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
int main()
{
	int gradofuncion = 0;
	float comprobacion0 = 0;
	float comprobacion1 = 0;
	float comprobacionmenos1 = 0;

	float comprobacionP = 0;
	float valorX;

	cout << "De que grado va a ser la funcion " << endl;
	cin >> gradofuncion;

	vector <int> datosfuncion;  //Datos de la funcion hoygan xdxd !!11!!!one!!!

	cout << "Introduce los coeficientes de la funcion, empezando por x^0 :" << endl;

	for (int n, i = 0; gradofuncion > datosfuncion.size(); i++)
	{
		cout << "x^" << i << ":";
		cin >> n;
		datosfuncion.push_back(n);
	}


	comprobacion0 = datosfuncion[0];

	for (int j = 0; j < datosfuncion.size(); j++)
	{
		comprobacion1 += datosfuncion[j] * pow(0.1, j);
	}

	for (int n = 0; n < datosfuncion.size(); n++)
	{
		comprobacionmenos1 += datosfuncion[n] * pow(-0.1, n);
	}

	cout << "Comprobacion con 0: " << comprobacion0 << endl;
	cout << "Comprobacion con 1: " << comprobacion1 << endl;
	cout << "Comprobacion con -1: " << comprobacionmenos1 << endl;



	if (comprobacion0 >= 0 && comprobacion1 <= 0 || comprobacion0 <= 0 && comprobacion1 >= 0){
		cout << "El intervalo en el que se encuentra c es: [0, 1]";
	}
	else if (comprobacion0 >= 0 && comprobacionmenos1 <= 0 || comprobacion0 <= 0 && comprobacionmenos1 >= 0){
		cout << "El intervalo en el que se encuentra c es: [-1, 0]";
	}
	else if (comprobacion0 >= 0 && comprobacion0 > comprobacion1){
		while (comprobacionP > 0)
		{
			for (int n = 0, i = 0.2; n < datosfuncion.size(); n++, i + 0.1)
			{
				comprobacionP += datosfuncion[n] * pow(i, n);
				valorX = i;
			}
		}
		cout << "El intervalo en el que se encuentra c es: [" << valorX - 0.1 << "," << valorX << "]" << endl;
	}
	else if (comprobacion0 >= 0 && comprobacion0 > comprobacionmenos1){
		while (comprobacionP > 0)
		{
			for (int n = 0, i = -0.2; n < datosfuncion.size(); n++, i--)
			{
				comprobacionP += datosfuncion[n] * pow(i, n);
				valorX = i;
			}
		}
		cout << "El intervalo en el que se encuentra c es: [" << valorX << "," << valorX + 0.1 << "]" << endl;
	}
	else {
		cout << "No tiene solucion";
	}
	

	return 0;
}