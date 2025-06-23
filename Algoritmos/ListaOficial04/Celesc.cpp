#include <iostream>
using namespace std;

int main() {
    int numero, tipo;
    float kwh, custo;
    float Totalresidencial = 0, Totalcomercial = 0, Totalindustrial = 0;

    while (numero != 0 ) {
        cout << "Digite o numero do consumidor (0 para finalizar): ";
        cin >> numero;

        cout << "Digite a quantidade de kWh consumidos: ";
        cin >> kwh;

        cout << "Digite o tipo do consumidor (1-Residencial, 2-Comercial, 3-Industrial): ";
        cin >> tipo;

        if (tipo == 1) {
            custo = kwh * 0.3;
            Totalresidencial += kwh;
        } else if (tipo == 2) {
            custo = kwh * 0.5;
            Totalcomercial += kwh;
        } else if (tipo == 3) {
            custo = kwh * 0.7;
            Totalindustrial += kwh;
        } else {
            cout << "Tipo invalido. Dados ignorados.\n";
            continue;
        }

        cout << "Custo total do consumidor " << numero << ": R$" << custo << endl;
    }

    cout << "\nTotal de consumo:\n";
    cout << "Residencial: " << Totalresidencial << " kWh\n";
    cout << "Comercial: " << Totalcomercial << " kWh\n";
    cout << "Industrial: " << Totalindustrial << " kWh\n";

    if (Totalresidencial > Totalcomercial && Totalresidencial > Totalindustrial) 
    {
        cout << "\nCategoria que mais consome: Residencial\n";
    } else if (Totalcomercial > Totalresidencial && Totalcomercial > Totalindustrial) 
    {
        cout << "\nCategoria que mais consome: Comercial\n";
    } else if (Totalindustrial > Totalresidencial && Totalindustrial > Totalcomercial) 
    {
        cout << "\nCategoria que mais consome: Industrial\n";
    } else {
        cout << "\nEmpate entre categorias ou sem dados suficientes.\n";
    }

}
