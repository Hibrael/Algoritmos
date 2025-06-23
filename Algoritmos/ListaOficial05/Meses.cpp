#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    // Variaveis
    string meses[12] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho",
    "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"}; int nmes;

    //Entrada
    cout << "Digite o número do mês (1 a 12): ";
    cin >> nmes;

    // Processo
    if (nmes >= 1 && nmes <= 12) {
        cout << "O mês correspondente é: " << meses[nmes - 1] << endl;
    } else {
        cout << "Número inválido! Digite um número entre 1 e 12." << endl;
    }
}
