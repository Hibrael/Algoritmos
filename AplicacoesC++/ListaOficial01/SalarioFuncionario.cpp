#include <iostream>
using namespace std;
main ( )
{
    setlocale (LC_ALL, "Portuguese");

    //entrada
    string Funcionario;
    float salariobruto, salariofinal, desc1, desc2, s_comdesconto;

    //entrada
    cout << "Por favor, informe o nome do colaborador: ";
    cin >> Funcionario;
    cout  <<Funcionario << ", por gentileza, qual o seu salário bruto atual? ";
    cin >> salariobruto;

    //processo
    //salariofinal = (salariobruto * 0.9) * 0.75;
    //Dava pra fazer assim, mas como eu tenho que esmiuçar tudo pro usuario tive que declarar variavel
    

    desc1 = salariobruto*0.1;
    s_comdesconto = salariobruto - desc1;
    desc2 = (salariobruto*0.9) * 0.225; 
    salariofinal = salariobruto - desc1 - desc2;
    //saida
    cout << "\n=====================================\n";

        cout << salariobruto <<" - 10% (R$"<<desc1<<") = R$:" << s_comdesconto <<"-------Previdência" <<endl;
        cout << s_comdesconto <<" - 25% (R$"<<desc2<<") = R$:" << salariofinal <<"-------Imposto de Renda" <<endl;
        cout << endl;
        cout << Funcionario <<", seu salário líquido final corresponde á R$:" <<salariofinal  <<" Reais.";
    cout << "\n=====================================\n";

}