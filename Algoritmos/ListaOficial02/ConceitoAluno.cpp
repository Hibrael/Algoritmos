#include <iostream>
#include <locale.h>
using namespace std;
main()
{
    setlocale(LC_ALL, "Portuguese");

    // Suponha que o conceito de um aluno seja determinado em função da sua nota. Suponha
    // também que esta nota seja um valor inteiro na faixa de 0 a 100 conforme a seguinte faixa:   
    // Nota Conceito
    // 0 a 39 E
    // 40 a 59 D
    // 60 a 75 C
    // 76 a 89 B
    // 90 a 100 A
    // Crie um algoritmo que apresente o conceito e a nota do aluno.

    //variaveis
    string aluno, conceito;
    int nota;

    //entrada

    cout <<"Nome do aluno: ";
    getline(cin, aluno);
    cout<<endl 
    <<"Nota do Aluno: ";
    cin >>nota;

    //processo

    if (nota >= 0 && nota <=39){
        conceito = "E";
    }else if (nota >= 40 && nota <= 59){
        conceito = "D";
    }else if (nota >= 60 && nota <= 75){
        conceito = "C";
    }else if (nota >= 76 && nota <= 89){
        conceito = "B";
    }else{
        conceito = "A";
    }
        

    //saida
    cout <<"O conceito do Aluno(a) " <<aluno <<" é: " <<conceito
    <<endl;

}