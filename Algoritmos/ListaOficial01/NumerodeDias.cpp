#include <iostream>
#include <ctime>
#include <locale> 
using namespace std;

main()
{
    setlocale(LC_ALL, "portuguese"); 

    // Variáveis 
    int dia, mes, ano;
    int diaAtual, mesAtual, anoAtual; 
    int diasvividos, mesvividos, anosvividos, totaldedias;
    char barra;

    // Entrada
    cout << "Por gentileza, informe a sua data de nascimento (dd/mm/aaaa): ";
    cin >> dia >> barra >> mes >> barra >> ano;

    // Processo (coleta da data atual)
    time_t t = time(0); // Essa função trás o número de segundos desde 1º de janeiro de 1970 até o momento atual
    struct tm* dataAtual = localtime(&t); // Converte o valor de time_t para um formato compreensivel (data e hora)

    diaAtual = dataAtual->tm_mday; 
    mesAtual = dataAtual->tm_mon + 1; // Meses são contados de 0 a 11, então somamos 1 para ter o mês correto
    anoAtual = dataAtual->tm_year + 1900; // A função traz o número de anos desde 1900, então somamos 1900 para obter o numero correto do ano atual

    // Processo cálculo
    diasvividos = diaAtual - dia; 
    mesvividos = mesAtual - mes; 
    anosvividos = anoAtual - ano;

    // Caso o mês de nascimento seja maior que o mês atual
    if (mesvividos < 0) {
        anosvividos--;  // Subtrai 1 ano alterando diretamente o valor da varivael 
        mesvividos += 12;  // Ajusta o número de meses (pois subtraiu 1 ano)
    }

    // Caso o dia de nascimento ainda não tenha ocorrido no mês atual (mesma lógica de cima)
    if (diasvividos < 0) {
        mesvividos--; 
        diasvividos += 30; 
    }

    // Processo (conversão da data para dias)
    totaldedias = (anosvividos * 360) + (mesvividos * 30) + diasvividos; 

    // saída
    cout << "\n============================================================================\n";
    cout << "Parabéns, você está vivo a aproximadamente " << totaldedias << " dias\n";
    cout << "================================================================================";

}