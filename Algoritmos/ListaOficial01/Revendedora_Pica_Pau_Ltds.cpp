#include <iostream>
using namespace std;
main ( )
{
	setlocale (LC_ALL, "Portuguese");
	
	//declara��o de variaveis
	string vendedor;
	int carrosvendidos; 
	float valorvenda, salariototal, valortotal, comissao;
	
	//entrada
	cout << "==================Gerenciamento de vendas=======================\n";
	cout <<  "OL�, para come�armos, informe seu nome: ";
	cin >> vendedor; 
	cout << "Ok, " <<vendedor <<", quantos carros vendeu hoje? " <<endl;
	cin >> carrosvendidos;
	cout << "Por qual valor? ";
	cin >> valorvenda;
	
	//processo
	valortotal = carrosvendidos * valorvenda;
	comissao = 0.05 * valortotal;
	salariototal = 350 + 50 + comissao; 
	
	//saida
	cout << "\n==================Gerenciamento de vendas=======================\n";
	cout << "Parab�ns " <<vendedor <<"! Voc� vendeu um total de " <<carrosvendidos << " carro(s) no valor de R$:" <<valorvenda <<endl <<"totalizando R$:" <<valortotal <<" reais em vendas!";
	cout << "\n====================================================================\n";
	cout << "Seu sal�rio final � de R$:" << salariototal;
	//cout << endl; cout << vendedor;
		
	
}
