#include <iostream>
#include <locale.h>
using namespace std;
main()
{
    setlocale(LC_ALL, "Portuguese");

//     Escreva algoritmo que, para uma conta bancária, leia o seu número, o saldo, o tipo de
// operação a ser realizada (depósito ou retirada) e o valor da operação. Após, determine e
// mostre o novo saldo. Se o novo saldo ficar negativo, deve ser mostrada, também, a
// mensagem “conta estourada”.

    //variaveis
    int operacao;
    string numeroconta;
    float saldoinicial, valoroperacao, saldofinal;

    //entrada
    cout<<"Digite o número da sua conta: ";
    getline(cin, numeroconta);
    cout<<"\nDigite o saldo atual da sua conta: R$";
    cin>>saldoinicial;
    cout<<endl 
    <<"Qual operação gostaria de realiar? \nDepósito[1]\nSaque[2]\n";
    cin>>operacao;

    //processo
    // cout<<endl<<numeroconta<<endl<<saldoinicial<<endl<<operacao; 
    while (operacao != 1 && operacao != 2){
        cout<<"Entrada inválida! Por favor, selecione uma opção válida: ";
        cout<<endl 
        <<"Qual operação gostaria de realiar? \nDepósito[1]\nSaque[2]\n";

        cin>>operacao;
    }
    
    if(operacao==1){
        cout<<"Qual o valor a ser depositado? R$";
        cin>>valoroperacao;
        saldofinal = saldoinicial + valoroperacao;
    }else if(operacao==2){
        cout<<"Digite o valor do saque: R$";
        cin>>valoroperacao;
        saldofinal = saldoinicial - valoroperacao;
    }
 

        //saida
        cout <<"\n====================================\n";
        cout <<"Conta " <<numeroconta
        <<endl;
        cout <<"Saldo atual: R$" <<saldofinal;
        if (saldofinal<0)
        {
            cout<<"\nConta estourada";
        }
        
        
    

}