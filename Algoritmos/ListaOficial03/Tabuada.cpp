#include <iostream>
#include <vector>
#include <string>
using namespace std;

main() {
    setlocale(LC_ALL, "Portuguese");

    int T1 = 1, cont = 1, resultado;
    
    for (int i = 0; i < 100; i++)
    {   
        if (T1 ==1 && cont == 1)
        {
             cout <<"\n==============TABUADA DO "<<T1 <<"==============\n"; 
        }
        resultado = T1 * cont; 
        cout <<T1 <<"X" <<cont <<" = " <<resultado <<endl;

        cont++;
        if (cont >10) 
        {
            T1++;
            cont = 1;
            if(T1 <11)
            {
             cout <<"\n==============TABUADA DO "<<T1 <<"==============\n";            
            }
            
        }
    }
   


    }   


