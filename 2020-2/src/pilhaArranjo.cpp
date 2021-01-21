#include "../include/pilhaArranjo.hpp"

PilhaArranjo::PilhaArranjo(){
    topo = -1;
}

void PilhaArranjo::Empilha(TipoDado dado){
    if(tamanho == MAXTAM){
        throw "ERRO: Pilha esta cheia";
    }
    topo++;
    dados[topo] = dado;
    tamanho++;
}

TipoDado PilhaArranjo::Desempilha(){
    if(Vazia()){
        throw "ERRO: Pilha esta vazia";
    }
    TipoDado aux;
    aux = dados[topo];
    topo--;
    tamanho--;

    return aux;
}

void PilhaArranjo::Limpa(){
    tamanho = 0;
    topo = -1;
}