#include <iostream>
#include <locale.h>
using namespace std;
main()
{
	
	
//		Um hotel cobra R$ 60.00 a diária e mais uma taxa de serviços. Construa um algoritmo que
//		mostre o nome e a conta de um cliente, tendo como base as seguintes taxas de serviços é:
//		R$ 5.50 por diária, se o número de diárias for maior que 5;
//		R$ 7.00 por diária, se o número de diárias for igual a 5;
//		R$ 9.00 por diária, se o número de diárias for menor que 5.	
	setlocale(LC_ALL, "Portuguese");
	
	//variaveis 
	
	string nome;
	int diarias;
	float taxa, valortotal;
	
	//entrada
	
	cout << "Olá, para continuarmos, digite seu nome: ";
	cin >> nome;
	
	
	cout <<"Quantas diárias deseja reservar? ";
	cin >> diarias;
	
	//processo
	if(diarias>5){
		taxa = 5.50;
		
	} else if (diarias == 5){
		taxa = 7.00;
		
	}else {
		taxa = 9.00;
		
	}
	
	valortotal = (60.00 * diarias) + (taxa * diarias);
	//saida
	
    cout << "\nOk, " << nome <<"Sua reserva ficou assim: "
	<< endl;
    cout << "Número de diárias: " << diarias 
	<< endl;
    cout << "Taxa adicional por diária: R$ " << taxa 
	<< endl;
    cout << "Valor total a pagar: R$ " << valortotal 
	<< endl;
}
