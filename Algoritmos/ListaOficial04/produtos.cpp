#include <iostream>
#include <string>
using namespace std;

int main() {
    string nome, Maisbarato, Maisvendido;
    float preco, valortotal = 0, menorPreco = 0;
    float media;
    int quantidade, Totalprodutos = 0, maiorQuantidade = 0;

    while (nome != "fim") {
        cout << "Digite o nome do produto (ou 'fim' para encerrar): ";
        cin >> nome;

        cout << "Digite o preco unitario do produto: ";
        cin >> preco;

        cout << "Digite a quantidade vendida do produto: ";
        cin >> quantidade;

        if (Totalprodutos == 0 || preco < menorPreco) {
            menorPreco = preco;
            Maisbarato = nome;
        }

        if (quantidade > maiorQuantidade) {
            maiorQuantidade = quantidade;
            Maisvendido = nome;
        }

        valortotal += preco;
        Totalprodutos++;
    }

    if (Totalprodutos > 0) {
        media = valortotal / Totalprodutos;

        cout << "\nProduto mais barato: " << Maisbarato << " (R$" << menorPreco << ")\n";
        cout << "Produto mais vendido: " << Maisvendido << " (" << maiorQuantidade << " unidades)\n";
        cout << "Media de preco dos produtos: R$" << media << endl;
    } else {
        cout << "\nNenhum produto foi cadastrado.\n";
    }

}
