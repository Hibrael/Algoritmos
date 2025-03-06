#include <iostream>
#include <locale.h>
using namespace std;

main() {
    setlocale(LC_ALL, "Portuguese");

    float base, altura, area; //declaração de variáveis
    cout << "--------Cálculo da área de um retângulo--------- \n \n"; //enunciado da aplicação
    cout << "Digite a base: "; //cout << = Console.Writeline("")
    cin >> base; //cin >> = Console.Readline()
    cout << "Digite a altura:  ";
    cin >> altura;
    area = base * altura;
    cout << "A área do retângulo é: " << area;
}
