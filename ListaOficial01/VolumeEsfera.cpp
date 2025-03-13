#include <iostream>
using namespace std;
main ( )
{
    setlocale(LC_ALL, "Portuguese");

    //varivaeis 
    float raio, volume, pi;
    pi = 3.14159;

    //entrada
    cout << "Qual o raio da esfera a ser calculada? ";
    cin >> raio;

    //processo
    volume = (4 * (raio *raio*raio) * pi) / 3;

    //saida
    cout<<"O volume aproximado da esfera é: "<<volume;

}