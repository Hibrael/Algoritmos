#include <iostream>
using namespace std;
main ( )
{
    setlocale (LC_ALL, "Portuguese");

    //declração de variaveis 

    string marca;
    float kminicial, kmfinal, kmpercorrido, litrosconsumidos, consumoautomovel;


    //sistema de entrada
    cout << "=========Controle_de_Consumo_de_Combustivel==========" <<endl;
    cout <<"=====================================================" << endl;
    cout << "Marca/Modelo do carro utilizado: ";
    cin >> marca;
    cout << "Informe a quilometragem incial do veículo: "; 
    cin >> kminicial;
    cout << "ao final do percurso, qual era a nova quilometragem? ";
    cin >> kmfinal;
    cout << "Informe quantos litros foram consumidos: ";
    cin >> litrosconsumidos;
    cout <<"=====================================================";
    cout << endl; cout << endl;
    
    

    //processamento
    kmpercorrido = kmfinal - kminicial;
    consumoautomovel = kmpercorrido/litrosconsumidos;

    //saida
    cout <<"=====================================================";
    cout <<endl;
    cout <<"Foram percorridos " <<kmpercorrido << " kilometros com " <<marca;
    cout <<endl;
    cout <<"Totalizando um consumo total de " <<consumoautomovel <<"Km/Litros";
    cout <<endl;
    cout <<"=====================================================";


}