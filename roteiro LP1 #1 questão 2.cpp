#include <iostream>
#include <cstdio>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");
    double aux;
    int i, resposta;
    srand(time(NULL));
    aux = rand() % 100;

    i = aux;

    while(resposta != i){
        cout << "Digite o seu palpite" << endl;
        cin >> resposta;
        if(resposta > i)
            cout << "Muito alto. tente novamente" << endl;
        else if(resposta < i)
            cout << "Muito baixo. tente novamente" << endl;

    }
    cout << "Parab�ns, voc� adivinhou no n�mero" << endl;
    return 0;
}
