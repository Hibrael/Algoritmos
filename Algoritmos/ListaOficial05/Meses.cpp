#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    // Variaveis
    string meses[12] = {"Janeiro", "Fevereiro", "Mar�o", "Abril", "Maio", "Junho",
    "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"}; int nmes;

    //Entrada
    cout << "Digite o n�mero do m�s (1 a 12): ";
    cin >> nmes;

    // Processo
    if (nmes >= 1 && nmes <= 12) {
        cout << "O m�s correspondente �: " << meses[nmes - 1] << endl;
    } else {
        cout << "N�mero inv�lido! Digite um n�mero entre 1 e 12." << endl;
    }
}
