#include <iostream>
#include <cstdio>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");
    double r, aux2;
    int i, n, aux;
    int array[6] = {0};
    srand(time(NULL));
    cout << "Digite a quantidade de rolagens a serem avaliadas" << endl;
    cin >> n;
    system("cls");
    for(i = 0; i < n; i++){
        aux2 = rand() % 6;
        aux = aux2;
        array[aux]++;
    }
    for(i = 0; i < 6; i++){
        r = (double) array[i] / n;
        cout <<"Porcentagem de #" << i + 1 << ":" << r * 100 << endl;
    }
    return 0;
}
