#include <iostream>
#include <locale.h>
using namespace std;
main()
{
    setlocale(LC_ALL , "Portuguese");

    //VARIAVEIS 
    string cat;
    int categoria;
    float valorPIS, valorCOFINS, valortaxacategoria, valortotal, valortotalm3,
    m3consumidos, m3taxa1, valor1;

    //ENTRADA
    cout<<"==========Companhia Catarinense de Águas e Saneamento==========\n";
    cout<<"Número de m³ consumidos (utilize '.' como separador decimal): ";
    cin>>m3consumidos; 
    cout<<"\nAbaixo selecione a categoria corresponde ao seu conusmo: \nResidencial[1] \nComercial[2] \nIndustrial[3]";
    cin>>categoria;

    //PROCESSO

    // Consumo Valor
    // Até 10 m3 R$ 2,99 
    // De 11 a 25 m3 R$ 5,48
    // De 26 a 50 m3 R$ 7,69
    // Acima de 50 m3 R$ 9,22

    if (m3consumidos<=10) //valor "sem taxa"
    {
        valortotalm3 = m3consumidos *2.99;

    }else if (m3consumidos>10 && m3consumidos<=25) //taxa1  5,48
    {
       m3taxa1 = m3consumidos - 10;
       valor1 = m3taxa1 * 5.48;
       valortotalm3 = 29.9 + valor1;

    }else if (m3consumidos>25 && m3consumidos<=50) //taxa2 7,69
    {
        m3taxa1 = m3consumidos - 25;
        valor1 = m3taxa1 * 7,69;
        valortotalm3 = 29.9 + 82.2 + valor1;

    }else{ //acima de 50
        
        m3taxa1 = m3consumidos - 50;
        valor1 = m3taxa1 * 9.22;
        valortotalm3 = 29.9 + 82.2 + 192.25 + valor1;

    }

    if (categoria==1) //residencial
    {
        cat = "Residencial";
        valortaxacategoria = 5.00;
    }else if(categoria==2)
    {
        cat = "Comercial";
        valortaxacategoria = 10.00;
    }else if(categoria==3)
    {
        cat = "Industrial";
        valortaxacategoria=15.00;
    }
    valortotal = valortotalm3 + valortaxacategoria;

    //IMPOSTOS 
    valorPIS = (valortotal*0.0065);
    valorCOFINS = (valortotal*0.03);

    //valortotal
    valortotal = valortotalm3 + valortaxacategoria + valorPIS + valorCOFINS;


    cout<<"==========Companhia Catarinense de Águas e Saneamento==========\n";
    cout<<"Valor a ser pago de saneamento básico: R$" <<valortotalm3;
    cout<<"\nValor cobrado pela categoria " <<cat <<": R$" <<valortaxacategoria;
    cout<<"\nValor do PIS: R$" <<valorPIS;
    cout<<"\nValor do COFINS: R$" <<valorCOFINS;
    cout<<"\nValor total a ser pago: R$" <<valortotal;

}