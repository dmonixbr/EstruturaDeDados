#include "../include/filaEncadeada.hpp"

FilaEncadeada::FilaEncadeada(){
    frente = new NodeDado();   
    fim = frente; 
}

FilaEncadeada::~FilaEncadeada(){
    Limpa();
    delete frente;
}

void FilaEncadeada::Enfilera(TipoDado dado){
    NodeDado *novo;
    novo = new NodeDado();

    novo->dado = dado;
    fim->proximo = novo;
    fim = novo;
    tamanho++;
}

TipoDado FilaEncadeada::Desenfilera(){
    if(Vazia()){
        throw "ERRO: Fila esta vazia!";
    }
    TipoDado aux;
    NodeDado *p;

    p = frente->proximo;
    frente->proximo = p->proximo;

    aux = p->dado;
    delete p;
    tamanho--;

    return aux;
}

void FilaEncadeada::Limpa(){
    if(Vazia()){
        throw "ERRO: Fila esta vazia!";
    }
    while(!Vazia()){
        Desenfilera();
    }
}