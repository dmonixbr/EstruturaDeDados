#include <iostream>

void Selecao(int v[], int n){
    int min;
    for(int i=0; i < n-1; i++){
        min = i;
        for(int j=i+1; j<n; j++){
            if(v[j]<v[min]){
                min = j;
            }
        }
        int aux = v[i];
        v[i] = v[min];
        v[min] = aux;
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

    Selecao(vetor, 10);

    for(int i=0; i < 10; i++){
        std::cout << vetor[i] << " ";
    }
    std::cout << "\n";
}