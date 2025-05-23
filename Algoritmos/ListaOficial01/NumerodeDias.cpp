#include <iostream>
#include <ctime>
#include <locale> 
using namespace std;

main()
{
    setlocale(LC_ALL, "portuguese"); 

    // Vari�veis 
    int dia, mes, ano;
    int diaAtual, mesAtual, anoAtual; 
    int diasvividos, mesvividos, anosvividos, totaldedias;
    char barra;

    // Entrada
    cout << "Por gentileza, informe a sua data de nascimento (dd/mm/aaaa): ";
    cin >> dia >> barra >> mes >> barra >> ano;

    // Processo (coleta da data atual)
    time_t t = time(0); // Essa fun��o tr�s o n�mero de segundos desde 1� de janeiro de 1970 at� o momento atual
    struct tm* dataAtual = localtime(&t); // Converte o valor de time_t para um formato compreensivel (data e hora)

    diaAtual = dataAtual->tm_mday; 
    mesAtual = dataAtual->tm_mon + 1; // Meses s�o contados de 0 a 11, ent�o somamos 1 para ter o m�s correto
    anoAtual = dataAtual->tm_year + 1900; // A fun��o traz o n�mero de anos desde 1900, ent�o somamos 1900 para obter o numero correto do ano atual

    // Processo c�lculo
    diasvividos = diaAtual - dia; 
    mesvividos = mesAtual - mes; 
    anosvividos = anoAtual - ano;

    // Caso o m�s de nascimento seja maior que o m�s atual
    if (mesvividos < 0) {
        anosvividos--;  // Subtrai 1 ano alterando diretamente o valor da varivael 
        mesvividos += 12;  // Ajusta o n�mero de meses (pois subtraiu 1 ano)
    }

    // Caso o dia de nascimento ainda n�o tenha ocorrido no m�s atual (mesma l�gica de cima)
    if (diasvividos < 0) {
        mesvividos--; 
        diasvividos += 30; 
    }

    // Processo (convers�o da data para dias)
    totaldedias = (anosvividos * 360) + (mesvividos * 30) + diasvividos; 

    // sa�da
    cout << "\n============================================================================\n";
    cout << "Parab�ns, voc� est� vivo a aproximadamente " << totaldedias << " dias\n";
    cout << "================================================================================";

}