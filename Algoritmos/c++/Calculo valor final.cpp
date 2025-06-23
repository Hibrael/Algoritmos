#include <iostream>
#include <locale.h>
using namespace std;

main() {
    setlocale(LC_ALL, "Portuguese");

    //variáveis
    float custo, comissao, impostos, preco_final;

    //entrada
    cout << "-----Calculadora de preço final----- \n \n";
    cout << "Informe o preço de custo: ";
    cin >> custo;

    //processo
    impostos = custo * 0.45;
    comissao = custo * 0.10;
    preco_final = custo + impostos + comissao;

    //saída
    cout << endl;
    cout << "O custo de fábrica é: " << custo;
    cout << endl;
    cout << "Os impostos correspondem a: " << impostos;
    cout << endl;
   
