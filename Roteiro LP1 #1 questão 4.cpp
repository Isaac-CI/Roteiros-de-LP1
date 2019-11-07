#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int array[23] = {0};
    int voto, maior = 0, i, total = 0;
    double porcentagem;
    cout << "Enquete: Quem foi o melhor jogador?" << endl;
    while(1){
        cin >> voto;
        if(voto == 0)
            break;
        if(voto < 1 || voto > 23)
            cout << "Informe um valor entre 1 e 23 para votar ou 0 para sair." << endl;
        else{
            array[voto - 1]++;
            total++;
        }
    }
    cout << "Foram computados " << total << " votos." << endl;

    for(i = 0; i < 23; i++){
        if(array[i] > array[maior]){
            maior = i;
        }
        if(array[i] != 0){
            porcentagem = (double) array[i] / total;
            porcentagem *= 100;
            printf("Jogador: %d\tVotos: %d\t%: %.1lf%%\n", i+1, array[i], porcentagem);
        }
    }
    porcentagem = (double) array[maior] / total;
    porcentagem *=100;
    printf("O melhor jogador foi o numero %d, com %d votos, correspondendo a %.2lf do total de votos.\n", maior + 1, array[maior], porcentagem);
}
