#include "../include/filaArranjo.hpp"

FilaArranjo::FilaArranjo(){
    frente = 0;
    fim = 0;
}

void FilaArranjo::Enfilera(TipoDado dado){
    if(tamanho == MAXTAM){
        throw "ERRO: Fila esta cheia";
    }
    dados[fim] = dado;
    fim++;
    tamanho++;
}

TipoDado FilaArranjo::Desenfilera(){
    if(Vazia()){
        throw "ERRO: Fila esta vazia!";
    }
    TipoDado aux;
    aux = dados[frente];

    if(tamanho == 1){
        dados[frente] = -1;
        tamanho--;
        fim--;
    }
    else{
        for(int i=0; i<fim; i++){
            dados[i] = dados[i+1];
        }
        tamanho--;
        fim--;
    }
    return aux;
}

void FilaArranjo::Limpa(){
    if(Vazia()){
        throw "ERRO: Fila esta vazia!";
    }
    while(!Vazia()){
        Desenfilera();
    }
}