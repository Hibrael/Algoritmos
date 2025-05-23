#include <iostream>
#include <vector>
#include <string>
using namespace std;
main()
{
	int contH =0, contM =0, sexo;
	string nome;
	vector<string> homens, mulheres;
	
	for (int i = 0; i < 10; i++)
	{
        
		cout << "informe seu nome: ";  
        cin >> nome;
        cout << "informe o sexo 1-masc 2-fem: ";
		cin  >> sexo;
		
		if(sexo == 1)
		{
			contH++;
			homens.push_back(nome);


		}else if(sexo == 2){
			contM++;
			mulheres.push_back(nome);
		}
	}

	cout << "O total de homens é: " << contH << " Sendo eles: \n";
	for (string h : homens)
	cout << h << endl;

	cout <<"==============================";

	cout << "O total de mulheres é: " << contM <<" Sendo elas: ";
	for (string m : mulheres)
	cout << m << endl;
	
	
}
