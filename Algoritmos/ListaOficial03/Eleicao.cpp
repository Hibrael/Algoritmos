#include <iostream>
#include <vector>
#include <string>
using namespace std;

main() {
    setlocale(LC_ALL, "Portuguese");

    int voto=0, candiato1=0, candiato2=0, candiato3=0, nulo, branco;
    int totalvotos; 
    float porc1, porc2, porc3, porcnull, porcbranco;
    
    for (int i = 0; i < 10; i++)
    {   
        cout <<"Por favor, selecione seu voto: \n Canditado01 (1) \n Candidato02 (2) \n Candidato03 (3) \n Nulo (4)\n Voto em branco (5) \n";
        cin >> voto; 

        switch (voto)
        {
            case 1: candiato1++; break;
            case 2: candiato2++; break;
            case 3: candiato3++; break;
            case 5: nulo++; break;
            case 6: branco++; break;
        
        default:
            break;
        }

    }
        //Processo
        totalvotos =  candiato1 + candiato2 + candiato3 + nulo + branco; 

        porc1 = (candiato1 * 100.0) / totalvotos;
        porc2 = (candiato2 * 100.0) / totalvotos;
        porc3 = (candiato3 * 100.0) / totalvotos;
        porcnull = (nulo * 100.0) / totalvotos;
        porcbranco = (branco * 100.0) / totalvotos;

        //Saida
        cout <<"===============Votos por candidato===============\n";
        cout << "Candidato01: " << candiato1 << " votos (" << porc1 << "%)\n";
        cout << "Candidato02: " << candiato2 << " votos (" << porc2 << "%)\n";
        cout << "Candidato03: " << candiato3 << " votos (" << porc3 << "%)\n";
        cout <<"=============Votos nulo ou em branco=============\n";
        cout << "Nulos: " << nulo  << " votos (" << porcnull << "%)\n";
        cout << "Votos em branco: " << branco << " votos (" << porcbranco << "%)\n";


        if (candiato1 > candiato2 && candiato1 > candiato3) {
        cout << "\nVencedor: Candidato01  (" << porc1 <<"%)\n";
        } else if (candiato2 > candiato1 && candiato2 > candiato3) {
        cout << "\nVencedor: Candidato02 (" << porc2 <<"%)\n";
        } else if (candiato3 > candiato1 && candiato3 > candiato2) {
        cout << "\nVencedor: Candidato03 (" << porc3 <<"%)\n";
        } else {
         cout << "\nEmpate entre candidatos!\n";
    }

    }   


