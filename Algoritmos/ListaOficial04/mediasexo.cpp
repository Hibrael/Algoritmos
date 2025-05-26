#include <iostream>
#include <string>
using namespace std;

int main() {
    string nome;
    char sexo;
    float salario;
    float somaSalarioM = 0, somaSalarioF = 0;
    int contM = 0, contF = 0;

    while (sexo != 'x' || sexo != 'X') {
        cout << "Digite o sexo do funcionario (M/F) ou 'X' para encerrar: ";
        cin >> sexo;

        cout << "Digite o nome do funcionario: ";
        cin >> nome;

        cout << "Digite o salario do funcionario: ";
        cin >> salario;

        if (sexo == 'M' || sexo == 'm') {
            somaSalarioM += salario;
            contM++;
        } else if (sexo == 'F' || sexo == 'f') {
            somaSalarioF += salario;
            contF++;
        }
    }

    float mediaM = 0, mediaF = 0;

    if (contM > 0) {
        mediaM = somaSalarioM / contM;
    }

    if (contF > 0) {
        mediaF = somaSalarioF / contF;
    }

    if (mediaM > mediaF) {
        cout << "\nSexo masculino possui maior media salarial: R$" << mediaM << endl;
    } else if (mediaF > mediaM) {
        cout << "\nSexo feminino possui maior media salarial: R$" << mediaF << endl;
    } else {
        cout << "\nMedias salariais iguais ou nenhum dado inserido.\n";
    }
}
