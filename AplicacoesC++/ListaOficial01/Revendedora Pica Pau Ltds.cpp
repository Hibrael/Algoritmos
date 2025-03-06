#include <iostream>
using namespace std;
main ( )
{
	setlocale (LC_ALL, "Portuguese");
	
	//declaração de variaveis
	string vendedor;
	int carrosvendidos; 
	float valorvenda, salariototal, valortotal, comissao;
	
	//entrada
	cout << "==================Gerenciamento de vendas=======================\n";
	cout <<  "OLá, para começarmos, informe seu nome: ";
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
	cout << "Parabéns " <<vendedor <<"! Você vendeu um total de " <<carrosvendidos << " carro(s) no valor de R$:" <<valorvenda <<endl <<"totalizando R$:" <<valortotal <<" reais em vendas!";
	cout << "\n====================================================================\n";
	cout << "Seu salário final é de R$:" << salariototal;
	//cout << endl; cout << vendedor;
		
	
}
