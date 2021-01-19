#include "../include/listaArranjo.hpp"

TipoDado ListaArranjo::GetDado(int pos){
    if(pos > this->GetTamanho() || pos <= 0){
        throw "ERRO: POSICAO INVALIDA!";
    }
    return this->dados[pos-1];
}

void ListaArranjo::SetDado(TipoDado dado,int pos){
    if(pos > this->GetTamanho() || pos <= 0){
        throw "ERRO: POSICAO INVALIDA!";
    }
    this->dados[pos-1] = dado;
}

void ListaArranjo::InsereInicio(TipoDado dado){
    if(this->GetTamanho() == MAXTAM){
        throw "ERRO: Lista cheia!";
    }
    if(this->Vazia()){
        this->dados[0] = dado;
        this->IncrementaTamanho();
    }
    else{
        this->IncrementaTamanho();
        for(int i=this->GetTamanho(); i>0; i--){
            this->dados[i] = this->dados[i-1];
        }
        this->dados[0] = dado;
    }
}

void ListaArranjo::InsereFinal(TipoDado dado){
    if(this->GetTamanho() == MAXTAM){
        throw "ERRO: Lista cheia!";
    }
    this->dados[this->GetTamanho()] = dado;
    this->IncrementaTamanho();
}

void ListaArranjo::InserePosicao(TipoDado dado, int pos){
    if(this->GetTamanho() == MAXTAM){
        throw "ERRO: Lista cheia!";
    }
    if(pos > this->GetTamanho() || pos <= 0){
        throw "ERRO: POSICAO INVALIDA!";
    }
    pos--;
    this->IncrementaTamanho();
    for(int i=this->GetTamanho(); i>pos; i--){
        this->dados[i] = this->dados[i-1];
    }
    this->dados[pos] = dado;
}

TipoDado ListaArranjo::RemoveInicio(){
    if(this->Vazia()){
        throw "ERRO: Lista vazia!";
    }

    TipoDado aux;
    aux = this->dados[0];
    for(int i=1; i<this->GetTamanho(); i++){
        this->dados[i-1] = this->dados[i];
    }
    this->DecrementaTamanho();
    return aux;
}

TipoDado ListaArranjo::RemoveFinal(){
    if(this->Vazia()){
        throw "ERRO: Lista vazia!";
    }

    TipoDado aux;
    this->DecrementaTamanho();
    aux = this->dados[this->GetTamanho()];

    return aux;
}

TipoDado ListaArranjo::RemovePosicao(int pos){
    if(this->Vazia()){
        throw "ERRO: Lista vazia!";
    }
    if(pos > this->GetTamanho() || pos <= 0){
        throw "ERRO: POSICAO INVALIDA!";
    }

    TipoDado aux;
    aux = this->dados[pos-1];

    for(int i=pos; i < this->GetTamanho(); i++){
        this->dados[i-1] = this->dados[i];
    }
    this->DecrementaTamanho();

    return aux;
}

void ListaArranjo::Imprime(){
    for(int i=0; i<this->GetTamanho(); i++){
        this->dados[i].Imprime();
    }
}

TipoDado ListaArranjo::Pesquisa(int chave){
    if(this->Vazia()){
        throw "ERRO: Lista vazia!";
    }
    TipoDado aux;
    aux.SetChave(-1);

    for(int i=0; i<this->GetTamanho(); i++){
        if(chave == this->dados[i].GetChave()){
            aux.SetChave(chave);
            break;
        }
    }
    return aux;
}

void ListaArranjo::Limpa(){
    this->tamanho = 0;
}