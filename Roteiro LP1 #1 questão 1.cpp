#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int i, maior = 0;
    while(1){
    cout << "Digite um numero: " << endl;
    cin >> i;
    if(i == 0)
        break;
    if(i > maior)
        maior = i;
    }
    system("cls");
    cout << "O maior valor inserido foi: " << maior << endl;
}
