#include <iostream>
#include <locale.h>
using namespace std;
main()
{
    setlocale(LC_ALL , "Portuguese");

    //VARIAVEIS 
    int categoria;
    float valorPIS, valorCOFINS, valorm3, valorSaneamento, valortotal, valortotalm3,
    m3consumidos, m3taxa1, m3taxa2, m3taxa3, valor1, valor2, valor3;
    valorm3 = 2.99;

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

    if (m3consumidos>10 && m3consumidos<=25)
    {
        m3taxa1 = m3consumidos - 10;
        valor1 = m3taxa1 * 5.48; //valor de m3 cobrados com a taxa de 5.48
        valortotalm3 = 10 *2.99 + valor1; 

    }else if (m3consumidos<25 && m3consumidos<=25)
    {
        m3taxa1 = m3consumidos - 10;
        valor1 = m3taxa1 * 5.48; //valor de m3 cobrados com a taxa de 5.48


        
        valortotalm3 = 10 *2.99 + valor1; 
      

    }

    cout<<endl<<valortotalm3;
}