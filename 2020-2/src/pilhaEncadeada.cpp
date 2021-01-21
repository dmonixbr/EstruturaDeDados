#include "../include/pilhaEncadeada.hpp"

PilhaEncadeada::PilhaEncadeada(){
    topo = NULL;
}

PilhaEncadeada::~PilhaEncadeada(){
    Limpa();
}

void PilhaEncadeada::Empilha(TipoDado dado){
    NodeDado *novo;
    novo = new NodeDado();

    novo->dado = dado;
    novo->proximo = topo;
    topo = novo;
    tamanho++;
}

TipoDado PilhaEncadeada::Desempilha(){
    if(Vazia()){
        throw "ERRO: Pilha esta vazia!";
    }
    TipoDado aux;
    NodeDado *p;

    p = topo;
    aux = topo->dado;
    topo = topo->proximo;
    tamanho--;

    delete p;

    return aux;
}

void PilhaEncadeada::Limpa(){
    if(Vazia()){
        throw "ERRO: Pilha esta vazia!";
    }

    while(!Vazia()){
        Desempilha();
    }
}