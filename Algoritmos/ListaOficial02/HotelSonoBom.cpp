#include <iostream>
#include <locale.h>
using namespace std;
main(){

    setlocale(LC_ALL, "Portuguese");

    /*=======================VARIÁVEIS=======================*/
    // Faça um programa para o Hotel Sono Bom. O algoritmo deve ler os seguintes dados:
    // a) O número da reserva
    // b) O nome do responsável pela reserva.
    // c) A quantidade de hóspedes.
    // d) O tipo de quarto.
    // e) A quantidade de diárias.
    // f) O valor consumido no frigobar.
    // g) Número de serviços de massagens utilizadas pelo cliente.
    // h) O valor do consumo de bar.
    int numeroreserva, hospedes, massagens, tipoquarto, qtddiarias, manutencaofrigobar, adicionalhospedes, valormassagens;
    string nome, quartostring;
    float valorquarto, valorfrigobar, valorbar, valorgarçom, valortotaldiarias, totalfrigobar, valortotalservicos, taxaISS, valorISS, valortotal, totalbar;

    /*=======================ENTRADA=======================*/

    cout<<"==========Olá! Bem vindo ao Hotel Sono Bom===========" <<endl;

    cout<<"Digite o número da reserva: ";
    cin>>numeroreserva;

    cin.ignore();

    cout<<"Por favor, digite o nome completo do responsável pela reserva: ";
    getline(cin, nome);

    cout<<"Qual a quantidade de hóspedes: ";
    cin>>hospedes;

    cout<<"A seguir, selecione o tipo de quarto escolhido: \n1-Standard[1] \n2-Luxo[2] \n3-VIP[3] \nDigite apenas o número corresponde ao quarto escolhido:";
    cin>>tipoquarto; 

    cout<<"Digite o número de diárias: ";
    cin>>qtddiarias;

    cout<<"Valor consumido no frigobar: R$";
    cin>>valorfrigobar;

    cout<<"Número de massagens utilizadas: ";
    cin>>massagens;

    cout<<"Valor consumido no bar: ";
    cin>>valorbar;

    /*=======================PROCESSO=======================*/
    
    //IF TIPO QUARTO
    if (tipoquarto == 1)
    {
        valorquarto = 50.00;
        quartostring = "Standard";
    }else if (tipoquarto == 2)
    {
        valorquarto = 80.00;
        quartostring = "Luxo";
    }else
    {
        valorquarto = 150.00;
        quartostring = "VIP";
    }

    //IF QUANTIDADE HOSPEDES
    if (hospedes >2 && hospedes<5) //familia pequena
    {
        adicionalhospedes = qtddiarias * 20.00;
    }else if (hospedes >=5) //familia grande
    {
        adicionalhospedes = qtddiarias * 40.00;
    }
    
    //IF SERVIÇO MASSAGEM
    if (massagens >0 && massagens <=3)
    {
        valormassagens = massagens*80.00;
    }else if(massagens>3){
        valormassagens = massagens*65.00;
    }

    //ADIÇÃO DE TAXA AOS VALORES CONSUMIDOS NO BAR E FRIGOBAR.
    if (valorfrigobar>0)
    {
        manutencaofrigobar = 12;
        totalfrigobar = valorfrigobar + manutencaofrigobar;
    }
    if (valorbar>0)
    {
        valorgarçom = valorbar*0.1;
        totalbar = valorbar + valorgarçom;
    }

    /*==============SOMA FINAL DOS VALORES==============*/


    //VALOR FINAL DIARIAS 
    valortotaldiarias = (valorquarto*qtddiarias) + adicionalhospedes;   //o valor total das diarias corresponde ao valor do quarto multiplicado a 
                                                                        //quantidade de dias que o usuario ficou hospedado acrescido do valor 
                                                                        //adicional em função do número de hóspedes 
    
    //SOMA SERVIÇOS
    valortotalservicos = valormassagens + totalfrigobar + totalbar;

    //CALCULO DA TAXA ISS

    if (qtddiarias>=5 && qtddiarias<=10)
    {
        taxaISS = 0.03;
    }else if (qtddiarias>10){
        taxaISS = 0.01;
    }else{
        taxaISS = 0.05;
    }
     //SOMA FINAL
     valortotal = valortotaldiarias + valortotalservicos;
     valorISS = valortotal * taxaISS;
     valortotal += valorISS;
     /*=======================SAÍDA=======================*/
    
     cout << "\n==========Detalhes da Reserva==========\n";
    cout << "Número da reserva: " << numeroreserva << endl;
    cout << "Responsável pela reserva: " << nome << endl;
    cout << "Tipo de quarto: " << quartostring << endl;
    cout << "Número de diárias: " << qtddiarias << endl;
    cout << "Valor das diárias: R$" << valortotaldiarias << endl;
    cout << "Valor total do serviço de massagem: R$" << valormassagens << endl;
    cout << "Valor consumido do frigobar: R$" << valorfrigobar << endl;
    cout << "Valor de manutenção do frigobar: R$" << manutencaofrigobar << endl;
    cout << "Valor total do serviço de bar: R$" << valorbar << endl;
    cout << "Taxa de comissão ao garçom (10%): R$" << valorgarçom << endl;
    cout << "ISS: R$" << valorISS << endl;
    cout << "Conta final: R$" << valortotal << endl;


}
