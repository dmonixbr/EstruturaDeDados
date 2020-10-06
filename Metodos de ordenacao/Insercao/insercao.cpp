#include<iostream>

void Insercao(int v[], int n){
    int aux, j;

    for(int i=1; i<n; i++){
        aux = v[i];
        j = i-1;
        while ((j>=0) and (aux < v[j])){
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = aux;
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

    Insercao(vetor, 10);

    for(int i=0; i < 10; i++){
        std::cout << vetor[i] << " ";
    }
    std::cout << "\n";
}