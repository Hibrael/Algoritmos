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
    int numeroreserva, hospedes, massagens, tipoquarto, qtddiarias;
    string nome;
    float valorquarto, valorfamilia, valorfrigobar, valormassagens, valorbar, valormassagens, adicionalhospedes, valorfinal, valortotaldiarias, valortotalservicos, valortotal;


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

    cout<<"Valor de consumido no bar: ";
    cin>>valorbar;

    /*=======================PROCESSO=======================*/
    
    //IF TIPO QUARTO
    if (tipoquarto == 1)
    {
        valorquarto = 50.00;

    }else if (tipoquarto == 2)
    {
        valorquarto = 80.00;

    }else if (tipoquarto == 3)
    {
        valorquarto = 150.00;
    }
    
    

    //IF QUANTIDADE HOSPEDES
    if (hospedes >2 || hospedes<5)
    {
        adicionalhospedes = qtddiarias * 20.00;
    }else if (hospedes >=5)
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
        valorfrigobar += 12.00;
    }
    if (valorbar>0)
    {
        valorbar += (valorbar*0.1);
    }

    /*==============SOMA FINAL DOS VALORES==============*/


    //VALOR FINAL DIARIAS 
    valortotaldiarias = (valorquarto*qtddiarias) + adicionalhospedes;   //o valor total das diarias corresponde ao valor do quarto multiplicado a 
                                                                        //quantidade de dias que o usuario ficou hospedado acrescido do valor 
                                                                        //adicional em função do número de hóspedes 
    
    //SOMA SERVIÇOS
    valortotalservicos = valormassagens + valorfrigobar + valorbar;

    //SOMA FINAL
    valortotal=valortotaldiarias + valortotalservicos;

    //CALCULO DA TAXA ISS

    if (qtddiarias>5)
    {
        /* code */
    }
    
}