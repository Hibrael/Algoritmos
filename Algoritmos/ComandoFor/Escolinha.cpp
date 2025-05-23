#include <iostream>
using namespace std;

main() {
    setlocale(LC_ALL, "Portuguese");

    string nome;
    int idade=0, cont_mirim=0, cont_juvenil=0, cont_adulto=0;
    
    while (idade != 0)
    {
        cout <<"Informe a sua idade: ";
        cin >> idade; 

        if (idade !=0)
        {
            cout << "Informe o nome: ";
            cin >> nome;   
        }
        if (idade >= 6 && idade <= 11)
        {
            cont_mirim++;
        }
        else if(idade >=12 && idade <18)
        {
            cont_juvenil++; 
        }
        else if(idade >=18)
        {
            cont_adulto++; 
        }
        else
        {

            cout << "\n Idade sem categoria \n";
        }
    
    }

    cout << "\n\n Total de mirim....: " << cont_mirim;
    cout << "\nTotal de juvenil..: " << cont_juvenil;
    cout << "\nTotal de adulto....: " << cont_adulto;

}

