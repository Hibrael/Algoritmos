#include <iostream>
#include <string>
using namespace std;

int main() {
    string nome;
    float nota, somaNotas = 0;
    int contador = 0;

    while (contador < 15) {
        cout << "Digite o nome do aluno (ou 'fim' para encerrar): ";
        cin >> nome;

        if (nome == "fim") {
            break;
        }

        cout << "Digite a nota do aluno: ";
        cin >> nota;

        somaNotas += nota;
        contador++;
    }

    if (contador > 0) {
        float media = somaNotas / contador;
        cout << "\nA média da turma é: " << media << endl;
    } else {
        cout << "\nNenhuma nota foi inserida.\n";
    }

}
