#include <iostream>
#include <vector>
using namespace std;

main() {
    setlocale(LC_ALL, "Portuguese");

    //variaveis 
    string nome, omaisvelho;
    int idade;
    int maisvelho = 0;


    while (idade != 0)
    {
        cout << "informe seu nome: ";  
        cin >> nome;
        cout << "informe sua idade (caso queira parar digite 0 para a idade): ";  
        cin >> idade;


        if (idade > maisvelho)
        {
            omaisvelho = nome; 
            maisvelho = idade;
        }
    }
    
    cout <<"\nMais velho(a): " <<omaisvelho <<", com: " <<maisvelho <<" anos";
        
    }