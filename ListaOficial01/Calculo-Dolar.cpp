#include <iostream>
#include <locale.h>
using namespace std;
main ( )
{
	setlocale(LC_ALL, "Portuguese");
	
	//variaveis
	float cotacaodolar, dolar, real;
	
	//entrada
	
	cout << "Informe a cotaçãoo atual do dólar: ";
	cin >> cotacaodolar;
	cout << "\nInforme o valor em dólares para a conversão: ";
	cin >> dolar;
	
	//processo 
	real = dolar * cotacaodolar;
	
	//saida
	cout <<"\n===========================================";
	cout << "\nUS$" <<dolar <<" Dólares, correspondem a: "<<real<< " reais\n";
	cout <<"===========================================";
	
}
