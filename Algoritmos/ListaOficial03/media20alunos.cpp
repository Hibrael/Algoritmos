#include <iostream>
#include <vector>
#include <string>
using namespace std;

main() {
    setlocale(LC_ALL, "Portuguese");

    string nome;
    float nota, media, somaNotas = 0;
    int notazero = 0, numalunos = 20;
    vector<string> zerado;

    for (int i = 0; i < numalunos; i++)
    {
        cout << "informe seu nome: ";  
        cin >> nome;
        cout << "informe sua nota: ";
		cin  >> nota;


       
        if (nota == 0 ){
            notazero++;
            zerado.push_back(nome);
        }
        
        somaNotas += nota; 
    }

   
     media = somaNotas / numalunos;
     cout << "A media dos alunos é: " <<media <<endl; 
    if (notazero > 0) {
        cout << "Alunos que tiraram nota 0: " <<notazero << endl;

        for (string nomeZerado : zerado) {
            cout << "- " << nomeZerado << endl;
        }

    }   
}

