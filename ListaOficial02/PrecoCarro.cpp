#include <iostream>
#include <locale.h>
using namespace std;
main()
{
    setlocale(LC_ALL, "Portuguese");
   

    // Desenvolva um programa para calcular o preço final de um carro. Tendo como base o valor
    // inicial do carro, informado pelo usuário, questione o proprietário se o veículo possui alguns
    // opcionais, conforme o esquema abaixo.
    // Vidro elétrico = adiciona R$ 500,00
    // Ar condicionado = adiciona R$ 2000,00
    // Trava central e Alarme = adiciona R$ 500,00
    // Pintura Metálica = adiciona R$ 1000,00
    // Direção Hidráulica = adiciona R$ 2500,00
    // Obs.: Caso o proprietário opte por pagamento à vista, calcule um desconto de 5%


    //variaveis

    char vidro, ar, trava, pintura, direcao, pagamento;
    float valorcarro, desconto, valorinicial;
    string adicionais; 

    //entrada
    cout <<"A seguir você terá que responder algumas perguntas referentes aos possíveis adicionais do carro, \npara o bom funcionamento do sistema favor responder SOMENTE com 'S' ou 'N' a TODAS as perguntas "
    <<endl;
    cout <<"Qual o valor inicial do carro? ";
    cin >>valorinicial;
    cout <<"O veículo possui vidro elétrico? S/N ";
    cin >>vidro;
    cout <<"O veículo possui ar condicionado? S/N ";
    cin >>ar;
    cout <<"O veículo possui trava central e Alarme? S/N ";
    cin >>trava;
    cout <<"O veículo possui pintura metálica? S/N ";
    cin >>pintura;
    cout <<"O veículo possui direção hidráulica? S/N ";
    cin >>direcao;
    cout <<"O valor final do veículo sofre um abate de 5% no pagamento em dinheiro, gostaria de pagar a vista? S/N  ";
    cin >>pagamento;

    //processo
    valorcarro = valorinicial;
    if (vidro == 'S' || vidro =='s') {
        valorcarro += 500.00;
        adicionais += "Vidro elétrico: R$ 500,00\n";
    }
    if (ar == 'S' || ar =='s') {
        valorcarro += 2000.00;
        adicionais += "Ar condicionado: R$ 2000,00\n";
    }
    if (trava == 'S' || trava =='s') {
        valorcarro += 500.00;
        adicionais += "Trava central e Alarme: R$ 500,00\n";
    }
    if (pintura == 'S' || pintura =='s') {
        valorcarro += 1000.00;
        adicionais += "Pintura metálica: R$ 1000,00\n";
    }
    if (direcao == 'S' || direcao =='s') {
        valorcarro += 2500.00;
        adicionais += "Direção hidráulica: R$ 2500,00\n";
    }
    if (pagamento == 'S' || pagamento =='s') { 
        desconto = valorcarro * 0.05;
        valorcarro -= desconto;
    }

    //saida
    cout <<"======================================"
    <<endl;
    cout <<"Valor do carro (inicial): R$ " <<valorinicial
    <<endl;
    cout <<"Adicionais e descontos: \n";
    cout << adicionais
    <<endl;
    if (pagamento == 'S'){
        cout <<"Desconto de 5% para pagamento a vista: R$ " <<desconto;
    }

    cout <<"\n======================================";
    cout <<"\nO valor final do carro é: R$ " <<valorcarro;
}
