#include <iostream>
#include <locale.h>
using namespace std;
main ( )
{
    setlocale(LC_ALL, "Portuguese");

    //declaração de variáveis
    float venda;
    int opcao, quantidadepicole; 

    cout << "\n\n========Sorveteria Galo Cinza ========\n\n";
    //cout << "Aqui na sorveteria Galo Cinza temos três sabores de picolé, são eles: Creme, Chocolate e Baunilha." << endl;

    //Sistema de entrada e validação de entrada de dados
   do {

    cout << "Digite o número do sabor de picolé vendido:" << endl;
    cout << "- Creme (1)" << endl;
    cout << "- Chocolate (2)" << endl;
    cout << "- Baunilha (3)" << endl;
    cin >> opcao; 

        //picole 1
    if(opcao == 1) {
        cout << "Você escolheu Creme!" << endl;
        cout << "Quantos foram vendidos??" << endl;
        cin >> quantidadepicole;
        venda = quantidadepicole * 0.50; 
        cout << "\n=============================================\n";
        cout << "Foram vendido(s) " <<quantidadepicole << " picolé(s) de Creme.\nValor da venda: R$" << venda;
        cout << "\n=============================================\n";

        //picole 2 
    } else if (opcao == 2) {
        cout << "Você escolheu Chocolate!" << endl;
        cout << "Quantos foram vendidos??" << endl;
        cin >> quantidadepicole;
        venda = quantidadepicole * 0.60;
        cout << "\n=============================================\n";
        cout << "Foram vendido(s) " <<quantidadepicole << " picolé(s) de Creme.\nValor da venda: R$" << venda;
        cout << "\n=============================================\n";
        //picole 3
    } else if (opcao == 3) {
        cout << "Você escolheu Baunilha!" << endl;
        cout << "Quantos foram vendidos??" << endl;
        cin >> quantidadepicole;
        venda = quantidadepicole * 0.75;
        cout << "\n=============================================\n";
        cout << "Foram vendido(s) " <<quantidadepicole << " picolé(s) de Creme.\nValor da venda: R$" << venda;
        cout << "\n=============================================\n";
    }
    else {
        cout << "\n=============================================\n";
        cout << "A opção selecionada não existe em nosso sistema, por favor, selecione uma opção válida.\n"; 
        cout << "=============================================\n"; 
    }

   } while (opcao != 1 && opcao != 2 && opcao != 3);

   return 0; 
    
    
    


}