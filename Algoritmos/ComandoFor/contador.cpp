#include <iostream>
#include <locale.h>
using namespace std;

main() {
    setlocale(LC_ALL, "Portuguese");

    for (int i = 1; i <=30; i++){

        cout<<i <<endl;
    }

}

