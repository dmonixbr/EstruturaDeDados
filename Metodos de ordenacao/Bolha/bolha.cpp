#include <iostream>

void Bolha(int V[], int n){
    for(int i=0; i<n-1 ;i++){
        for(int j=1; j<n-i ;j++){
            if(V[j]<V[j-1]){
                int aux;
                aux = V[j-1];
                V[j-1] = V[j];
                V[j] = aux;
            }
        }
    }
}
 void BolhaMelhorada(int V[], int n){
    for(int i=0; i<n-1 ;i++){
        int trocou = 0;
        for(int j=1; j<n-i ;j++){
            if(V[j]<V[j-1]){
                int aux;
                aux = V[j-1];
                V[j-1] = V[j];
                V[j] = aux;
                trocou = 1;
            }
        }
        if(!trocou){
            break;
        }
    }
 }

int main(){
    int vetor[10];

    for(int i=0; i < 10; i++){
        std::cin >> vetor[i];
    }
    for(int i=0; i < 10; i++){
        std::cout << vetor[i] << " ";
    }
    std::cout << "\n";

    BolhaMelhorada(vetor, 10);

    for(int i=0; i < 10; i++){
        std::cout << vetor[i] << " ";
    }
    std::cout << "\n";
}