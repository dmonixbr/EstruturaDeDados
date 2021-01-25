#include "../include/arvoreBinaria.hpp"

ArvoreBinaria::ArvoreBinaria(){
    raiz = NULL;
}

ArvoreBinaria::~ArvoreBinaria(){
    Limpa();
}

void ArvoreBinaria::Insere(TipoDado dado){
    InsereRecursivo(raiz, dado);
}

void ArvoreBinaria::InsereRecursivo(TipoNo* &p, TipoDado dado){
    if(p == NULL){
        p = new TipoNo();
        p->dado = dado;
    }
    else{
        if(dado.GetChave() < p->dado.GetChave()){
            InsereRecursivo(p->esq, dado);
        }
        else{
            InsereRecursivo(p->dir, dado);
        }
    }
}

void ArvoreBinaria::PreOrdem(TipoNo* p){
    if(p != NULL){
        p->dado.Imprime();
        PreOrdem(p->esq);
        PreOrdem(p->dir);
    }
}

void ArvoreBinaria::InOrdem(TipoNo* p){
    if(p!=NULL){
        InOrdem(p->esq);
        p->dado.Imprime();
        InOrdem(p->dir);
    }
}

void ArvoreBinaria::PosOrdem(TipoNo* p){
    if(p!=NULL){
        PosOrdem(p->esq);
        PosOrdem(p->dir);
        p->dado.Imprime();
    }
}

void ArvoreBinaria::Limpa(){
    ApagaRecursivo(raiz);
    raiz = NULL;
}

void ArvoreBinaria::ApagaRecursivo(TipoNo* p){
    if(p!=NULL){
        ApagaRecursivo(p->esq);
        ApagaRecursivo(p->dir);
        delete p;
    }
}