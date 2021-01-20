#include "../include/listaEncadeada.hpp"

ListaEncadeada::ListaEncadeada(){
    primeiro = new NodeDado();
    ultimo = primeiro;
}

ListaEncadeada::~ListaEncadeada(){
    Limpa();
    delete primeiro;
}

NodeDado* ListaEncadeada::Posiciona(int pos, bool antes=false){
    if((pos > GetTamanho()) || (pos <= 0)){
        throw "ERRO: posicao invalida";
    }
    NodeDado *p;
    p = primeiro;
    for (int i=1; i < pos; i++){
        p = p->proximo;
    }

    if(!antes){
        p = p->proximo;
    }

    return p;
}

TipoDado ListaEncadeada::GetDado(int pos){  
    NodeDado *p;
    p = Posiciona(pos);

    return p->dado;
}

void ListaEncadeada::SetDado(TipoDado dado, int pos){
    NodeDado *p;
    p = Posiciona(pos);
    p->dado = dado;
}

void ListaEncadeada::InsereInicio(TipoDado dado){
    NodeDado *nova;
    nova = new NodeDado();

    nova->dado = dado;
    nova->proximo = primeiro->proximo;
    primeiro->proximo = nova;
    IncrementaTamanho();

    if(nova->proximo == NULL){
        ultimo = nova;
    }
}

void ListaEncadeada::InsereFinal(TipoDado dado){
    NodeDado *nova;
    nova = new NodeDado();

    nova->dado = dado;
    ultimo->proximo = nova;
    ultimo = nova;
    IncrementaTamanho();
}

void ListaEncadeada::InserePosicao(TipoDado dado, int pos){
    NodeDado *nova;
    NodeDado *p;
    p = Posiciona(pos, true);
    nova = new NodeDado();

    nova->dado = dado;
    nova->proximo = p->proximo;
    p->proximo = nova;

    IncrementaTamanho();

    if(nova->proximo == NULL){
        ultimo = nova;
    }
}

TipoDado ListaEncadeada::RemoveInicio(){
    if(Vazia()){
        throw "ERRO: Lista vazia!";
    }

    TipoDado aux;
    NodeDado *p;

    p = primeiro->proximo;
    primeiro->proximo = p->proximo;
    aux = p->dado;
    delete p;
    DecrementaTamanho();

    if(primeiro->proximo == NULL){
        ultimo = primeiro;
    }

    return aux;
}

TipoDado ListaEncadeada::RemoveFinal(){
    if(Vazia()){
        throw "ERRO: Lista vazia!";
    }

    TipoDado aux;
    NodeDado *p;
    p = Posiciona(GetTamanho(), true);
    aux = p->proximo->dado;

    p->proximo = NULL;
    delete ultimo;
    ultimo = p;
    DecrementaTamanho();

    return aux;
}

TipoDado ListaEncadeada::RemovePosicao(int pos){
    if(Vazia()){
        throw "ERRO: Lista vazia!";
    }

    TipoDado aux;
    NodeDado *p;
    NodeDado *node_aux;

    p = Posiciona(pos, true);
    node_aux = p->proximo;
    aux = node_aux->dado;

    p->proximo = node_aux->proximo;
    delete node_aux;
    DecrementaTamanho();

    if(p->proximo == NULL){
        ultimo = p;
    }

    return aux;
}

void ListaEncadeada::Imprime(){
    if(Vazia()){
        throw "ERRO: Lista vazia!";
    }
    NodeDado *p;
    p = primeiro->proximo;

    for(int i=0; i<GetTamanho(); i++){
        p->dado.Imprime();
        p = p->proximo;
    }
}

TipoDado ListaEncadeada::Pesquisa(int chave){
    TipoDado aux;
    NodeDado *p;

    p = primeiro->proximo;
    aux.SetChave(-1);

    while(p!=NULL){
        if(p->dado.GetChave() == chave){
            aux = p->dado;
            break;
        }
        p = p->proximo;
    }

    return aux;
}

void ListaEncadeada::Limpa(){
    NodeDado *p;
    p = primeiro->proximo;

    while (p!=NULL){
        primeiro->proximo = p->proximo;
        delete p;
        p = primeiro->proximo;
    }
    tamanho = 0;
    ultimo = primeiro;
}