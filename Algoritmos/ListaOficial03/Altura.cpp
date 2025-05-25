#include <iostream>
#include <vector>
using namespace std;

main() {
    setlocale(LC_ALL, "Portuguese");

    //variaveis 
    string nome, omaisnovo, omaisalto;
    float altura, mediaidade;
    int idade, somaidade, mais35;
    int maisnovo = 999,  maisalto = 0,  maisde180 = 0, numpessoas = 5; 


    for (int i = 0; i < numpessoas; i++)
    {
        cout << "informe seu nome: ";  
        cin >> nome;
        cout << "informe sua idade: ";  
        cin >> idade;
        cout << "informe sua altura: ";
		cin  >> altura;

    
        if (altura >= 180)
        {
            maisde180++;
            somaidade += idade; 
        }
       
        if (idade >= 35 ){
            mais35++;
        }

        if (idade < maisnovo)
        {
            omaisnovo = nome; 
            maisnovo = idade;
        }
        
        if (altura > maisalto)
        {
            omaisalto = nome;
            maisalto = altura; 
        }
    }

    //Media de idade das pessoas com mais de 1,80 
    mediaidade = somaidade / maisde180;
    cout <<endl << "Existem " <<maisde180; 
    cout <<" pessoas com mais de 1,80 de altura, a idade media entre elas é: "
    <<mediaidade;

    //O total de pessoas com mais de 35 anos
    cout <<"\nExistem " <<mais35 <<" pessoas com mais de 35 anos";

    //O mais alto
    cout <<"\nMais alto(a): " <<omaisalto <<", com " <<maisalto <<" de altura";
    //O mais novo 
    cout <<"\nMais novo(a): " <<omaisnovo <<", com: " <<maisnovo <<" anos";


    }   

