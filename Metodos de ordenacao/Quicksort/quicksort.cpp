#include <iostream>

void Particiona(int esq, int dir, int *i, int *j, int v[]){
    int x, w;
    *i = esq;
    *j = dir;
    x = v[(*i+*j)/2];       //pivô selecionado é o elemento do meio do vetor

    do{
        while(x > v[*i])
            (*i)++;
        while(x < v[*j])
            (*j)--;

        if(*i <= *j){
            w = v[*i];
            v[*i] = v[*j];
            v[*j] = w;
            (*i)++;
            (*j)--;
        }
    }while(*i<=*j);
}

void Ordena(int esq, int dir, int v[]){
    int i, j;
    Particiona(esq, dir, &i, &j, v);

    if(esq < j)
        Ordena(esq, j, v);
    if(i < dir)
        Ordena(i, dir, v);
}

void QuickSort(int v[], int n){
    Ordena(0, n-1, v);
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

    QuickSort(vetor, 10);

    for(int i=0; i < 10; i++){
        std::cout << vetor[i] << " ";
    }
    std::cout << "\n";
}