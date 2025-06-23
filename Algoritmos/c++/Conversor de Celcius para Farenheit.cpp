#include <iostream>
using namespace std;
main ( )
{
	setlocale (LC_ALL, "Portuguese");
	float F, C, Resultado;
	cout << "----Conversor de temperatura. Celcius ~> Farenheit ----- \n \n";
	cout << "Digite a temperatura em Celcius: ";
	cin >> C;
	
	F =  C * 1.8 + 32;
	cout << endl;
	cout << "A temperatura em Farenheit é: " << F;
	cout << endl;

}
