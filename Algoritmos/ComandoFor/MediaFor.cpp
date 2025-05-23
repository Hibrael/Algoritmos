#include <iostream>
using namespace std;
main()
{
	int contH = 0, contM = 0, sexo;
	float nota, soma_notaH = 0, soma_notaM = 0, mediaH, mediaM;
	
	for (int i = 0; i < 6; i++)
	{
		cout << "informe o sexo 1-masc 2-fem: ";
		cin  >> sexo;
		cout << "informe a nota: ";
		cin  >> nota;
		if (sexo == 1)
		{
			soma_notaH += nota;
			contH++;
		}else if (sexo == 2)
		{
			soma_notaM += nota;
			contM++;
		}
		
	}
	
	mediaH = soma_notaH/contH;
	mediaM = soma_notaM/contM;
	
	if (mediaM > mediaH)
	{
		cout << "mulheres tem nota melhor: " << mediaM;
	}
	else 	if (mediaM < mediaH)
	{
		cout << "homem tem nota melhor: " << mediaH;
	}
	else{
		cout << "empate ooooooooooooomaga";
	}
	
	
	
	
}
