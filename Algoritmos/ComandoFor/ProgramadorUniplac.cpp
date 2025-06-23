#include <iostream>
using namespace std;

main() {
    setlocale(LC_ALL, "Portuguese");


    string nome;
    int sexo, idade, turno, semestre, cont_manha=0, cont_noite=0;

    cout << "Informe o turno (1-manhã | 2-noite | 3-fim)";
    cin >> turno;

    while (turno != 0)
    {
        cout << "Informe o nome: ";
        cin >> nome;
        cout << "Informe a idade :";
        cin >> idade;
        cout << "Informe o sexo (1-fem | 2-masc) ";
        cin >> sexo;
        cout << "Informe o semestre";
        cin >>semestre;

        if(turno ==1){
            cont_manha++;
        }else if(turno ==2){
            cont_noite++;
        }



        cout <<"Informe o turno do próximo (1-manhã | 2-noite | 0-fim): ";
        cin >> turno;

    }



    cout << "\n\n=== Letra A: ";
    cout<< "\nTotal manhã: " << cont_manha;
    cout<< "\nTotal noite: " << cont_noite;
    
}
