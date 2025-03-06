#include <iostream>
#include <locale.h>
using namespace std;

main() {
    setlocale(LC_ALL, "Portuguese");

    //variáveis
    string nome;
    float preco_unitario, comissao;
    int qtde;

    //entrada
    cout << "-----Calculadora de comissão----- \n \n";
    cout << "Informe seu nome: ";
    cin >> nome;
    cout << endl;
    cout << "Informe o preço da peça: ";
    cin >> preco_unitario;
    cout << "Informe a quantidade vendida: ";
    cin >> qtde;

    //processo
    comissao = (qtde * preco_unitario) * 0.05;

    //saída
    cout << endl;
    cout << "Parabéns! Você vendeu " << qtde << " peça(s), no valor de " << preco_unitario;
    cout << endl;
    cout << "O valor da comissão é: " << comissao;
}