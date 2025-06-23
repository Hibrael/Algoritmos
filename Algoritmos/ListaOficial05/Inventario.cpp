#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    //Variaveis
    string NomeItem[9999];      int TipoDocumento[9999];
    float Valor[9999];          int AnoPublicacao[9999];
    int totalItens = 0;         float SomaValorLivros = 0;
    int QtdLivros = 0;          bool TemAlgoritmosExperts = false;
    float SomaIdadeLivros = 0;  float SomaIdadeRevistas = 0;
    int QtdRevistas = 0;        int AnoAtual = 2025;
    float MaiorValor = 0;       float MenorValor = 9999;
    int IdMaiorValor = 0;       int IdMenorValor = 0;
    int AnoMaisRecente = 0;     int IdMaisRecente = 0;
    float mediaIdadeLivros = 0; float mediaIdadeRevistas = 0;
    

    // ENTRADA
    cout << "Digite o nome do item (ou 'fim' para encerrar): ";
    getline(cin, NomeItem[totalItens]);

    while (NomeItem[totalItens] != "fim") {
        cout << "Ano da publicação: ";
        cin >> AnoPublicacao[totalItens];
        cout << "Valor (preço): ";
        cin >> Valor[totalItens];
        cout << "Tipo do documento (1 = revista, 2 = livro): ";
        cin >> TipoDocumento[totalItens];
        cin.ignore();

        totalItens++;

        cout << "\nDigite o nome do próximo item (ou 'fim' para encerrar): ";
        getline(cin, NomeItem[totalItens]);
    }

    // PROCESSO
    for (int i = 0; i < totalItens; i++) {
        if (TipoDocumento[i] == 2) {
            SomaValorLivros += Valor[i];
            QtdLivros++;
            SomaIdadeLivros += (AnoAtual - AnoPublicacao[i]);
        }

        if (TipoDocumento[i] == 1) {
            SomaIdadeRevistas += (AnoAtual - AnoPublicacao[i]);
            QtdRevistas++;
        }

        if (NomeItem[i] == "Algoritmos para Experts") {
            TemAlgoritmosExperts = true;
        }

        if (Valor[i] > MaiorValor) {
            MaiorValor = Valor[i];
            IdMaiorValor = i;
        }

        if (Valor[i] < MenorValor) {
            MenorValor = Valor[i];
            IdMenorValor = i;
        }

        if (AnoPublicacao[i] > AnoMaisRecente) {
            AnoMaisRecente = AnoPublicacao[i];
            IdMaisRecente = i;
        }
    }

        //calculo das medias
        if (QtdLivros >0) //Evitar divisao por zero (nunca duvide do usuario)
        {
            mediaIdadeLivros = SomaIdadeLivros / QtdLivros;
        }else{
            mediaIdadeLivros = 0;
        }
        if(QtdRevistas>0){
            mediaIdadeRevistas = SomaIdadeRevistas / QtdRevistas;
        }else{
            mediaIdadeRevistas=0;
        }


    // SAÍDA
        cout << "\nMédia de valores dos livros: R$ " << (SomaValorLivros / QtdLivros) << endl;

    if (TemAlgoritmosExperts) {
        cout << "O item 'Algoritmos para Experts' está presente no acervo!\n";
    } else {
        cout << "O item 'Algoritmos para Experts' NÃO está presente no acervo.\n";
    }

    cout << "Média de idade dos livros: " << mediaIdadeLivros << " anos\n";
    cout << "Média de idade das revistas: " << mediaIdadeRevistas << " anos\n";

    if (mediaIdadeLivros > mediaIdadeRevistas) {
        cout << "Os livros são mais antigos, em média.\n";
    } else if (mediaIdadeRevistas > mediaIdadeLivros) {
        cout << "As revistas são mais antigas, em média.\n";
    } else {
        cout << "Livros e revistas têm a mesma média de idade.\n";
    }

    cout << "Item mais caro:\n";
    cout << "  Nome: " << NomeItem[IdMaiorValor] << endl;
    cout << "  Valor: R$ " << Valor[IdMaiorValor] << endl;
    cout << "  Tipo: ";
    if (TipoDocumento[IdMaiorValor] == 1) cout << "Revista\n";
    else if (TipoDocumento[IdMaiorValor] == 2) cout << "Livro\n";
    cout << "  Ano: " << AnoPublicacao[IdMaiorValor] << endl;

    cout << "Item mais barato:\n";
    cout << "  Nome: " << NomeItem[IdMenorValor] << endl;
    cout << "  Valor: R$ " << Valor[IdMenorValor] << endl;
    cout << "  Tipo: ";
    if (TipoDocumento[IdMenorValor] == 1) cout << "Revista\n";
    else if (TipoDocumento[IdMenorValor] == 2) cout << "Livro\n";
    cout << "  Ano: " << AnoPublicacao[IdMenorValor] << endl;

    cout << "Item mais recente:\n";
    cout << "  Nome: " << NomeItem[IdMaisRecente] << endl;
    cout << "  Valor: R$ " << Valor[IdMaisRecente] << endl;
    cout << "  Tipo: ";
    if (TipoDocumento[IdMaisRecente] == 1) cout << "Revista\n";
    else if (TipoDocumento[IdMaisRecente] == 2) cout << "Livro\n";
    cout << "  Ano: " << AnoPublicacao[IdMaisRecente] << endl;

}