#include <iostream>
#include <vector>
#include <string>
using namespace std;

main() {
    setlocale(LC_ALL, "Portuguese");

    string nome;
    int notazero;
    float nota, media;
    vector<string> zerado;

    for (int i; i <5; i++)
    {
        cout << "informe seu nome: ";  
        cin >> nome;
        cout << "informe sua nota: ";
		cin  >> nota;

        if (nota == 0 ){
            notazero++;
        }
    }

}
