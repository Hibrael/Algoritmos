#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    string AlunoNome[9999];  int AlunoIdade[9999]; 
    int AlunoSexo[9999];     float AlunoNota[9999]; 
    float Notageral = 0;     float NotaMedia; 
    float NotaHomens = 0;    float NotaMulheres = 0; 
    int QtdHomens = 0;       int QtdMulheres = 0;
    float MediaHomens;       float MediaMulheres;
    int IdadeMin = 999;      int IdadeMax = 0;
    bool EhoZe = false;      int IdMelhorNota = 0;
    int IdMaisNovo = 0;      int IdMaisVelho = 0;
    int i = 0;


    //Entrada
    cout<< "Nome do aluno (digite 'fim' para encerrar): ";
    getline(cin, AlunoNome[i]); 

    while (AlunoNome[i] != "fim"){

    cout<< "\nIdade: ";
    cin >> AlunoIdade[i]; 
    cout<< "\nSexo do aluno (1)Feminino (2)Masculino: ";
    cin >> AlunoSexo[i]; 
    cout<< "\nNota do aluno: ";
    cin >> AlunoNota[i]; 
    
    
    i++;

    cin.ignore();
    cout<< "\nNome do aluno (digite 'fim' para encerrar): ";
    getline(cin, AlunoNome[i]); 
    }

    //Processo 
    
    for (int j=0; j <i; j++){


        if (AlunoNome[j] == "Zé")
        {
           EhoZe = true;
        }

        Notageral += AlunoNota[j];

        //Media por sexo (coleta)
        if (AlunoSexo[j] ==1){
            NotaMulheres += AlunoNota[j];
            QtdMulheres++;
        }else if(AlunoSexo[j] ==2){
            NotaHomens += AlunoNota[j];
            QtdHomens++;
        }

        //Faixa etaria 
        if(AlunoIdade[j] > IdadeMax){
            IdadeMax = AlunoIdade[j];
            IdMaisVelho = j;
        }
        if (AlunoIdade[j] < IdadeMin)
        {
            IdadeMin = AlunoIdade[j];
            IdMaisNovo = j;
        }

        //Melhor aluno
        if (AlunoNota[j] > AlunoNota[IdMelhorNota])
        {
            IdMelhorNota = j; 
        }
        
        
    }

    //Media final 
    NotaMedia = Notageral / i;

    //Media por sexo (calculo)
    MediaHomens = NotaHomens/QtdHomens;
    MediaMulheres = NotaMulheres/QtdMulheres; 
    
    

    //Saida

    //Eh o zé?
    if (EhoZe) {
        cout << "Zé! É você! Gattino te mandou um abraço.\n";
    }

    //Medias gerais
    cout<<"A media da nota dos alunos é: "<<NotaMedia;
    cout << "Média das mulheres: " << MediaMulheres << endl;
    cout << "Média dos homens: " << MediaHomens << endl;

    //Melhor media por sexo
    if (MediaMulheres > MediaHomens)
        cout << "Mulheres têm a melhor média.\n";
    else if (MediaHomens > MediaMulheres)
        cout << "Homens têm a melhor média.\n";
    else
        cout << "As médias são iguais.\n";

    cout << "Melhor aluno: " << AlunoNome[IdMelhorNota]
         << ", nota: " << AlunoNota[IdMelhorNota] <<", sexo: "; 
         if(AlunoSexo[IdMelhorNota] == 1) {cout<<"Feminino\n";}else{cout<<"Masculino\n";}
    
    cout<<"Aluno mais velho: "<<AlunoNome[IdMaisVelho] <<", Sexo: " <<AlunoSexo[IdMaisVelho] <<", Idade: " <<AlunoIdade[IdMaisVelho]
    <<", Nota: " <<AlunoNota[IdMaisVelho];
    cout <<endl;
    cout<<"Aluno mais novo: "<<AlunoNome[IdMaisNovo] <<", Sexo: " <<AlunoSexo[IdMaisNovo] <<", Idade: " <<AlunoIdade[IdMaisNovo]
    <<", Nota: " <<AlunoNota[IdMaisNovo];
    
}