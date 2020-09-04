#include "../include/listaarranjo.hpp"

TipoItem ListaArranjo::GetItem(int pos){
    if ((pos > tamanho) || (pos <= 0)){
        throw "Erro: posicao Invalida!";
    }
    return itens[pos-1];
}

void ListaArranjo::SetItem(TipoItem item, int pos){
    if ((pos > tamanho) || (pos <= 0)){
        throw "Erro: posicao Invalida!";
    }
    itens[pos-1] = item;
}

void ListaArranjo::InsereInicio(TipoItem item){
    
    if(tamanho == MAXTAM){
        throw "Erro: Lista Cheia!";
    }

    for(int i=tamanho-1; i>1; i--){
        itens[i+1] = this->itens[i];
    }
    itens[0] = item;
    tamanho++;
}

void ListaArranjo::InsereFinal(TipoItem item){
    if(tamanho == MAXTAM){
        throw "Erro: Lista Cheia";
    }

    itens[tamanho] = item;
    tamanho++;
}

void ListaArranjo::InserePosicao(TipoItem item, int pos){
    if((tamanho == MAXTAM) || (pos<0 || pos>tamanho)){
        throw "Erro: Lista Cheia ou posicao invalida";
    }

    for(int i=tamanho-1;i>pos-1;i--){
        itens[i] = itens[i+1];
    }

    itens[pos-1] = item;

    tamanho++;
}

TipoItem ListaArranjo::RemoveInicio(){
    TipoItem aux = itens[0];
    for(int i=0; i<tamanho; i++){
        itens[i] = itens[i+1];
    }
    tamanho--;

    return aux;
}

TipoItem ListaArranjo::RemoveFinal(){
    tamanho--;
    return itens[tamanho+1];
}

TipoItem ListaArranjo::RemovePosicao(int pos){
    if((pos>tamanho) || (pos<0)){
        throw "Erro: Posicao Invalida!";
    }

    TipoItem aux = itens[pos-1];

    for(int i=pos-1;i<tamanho;i--){
        itens[i] = itens[i+1];
    }

    tamanho--;

    return aux;
}

TipoItem ListaArranjo::Pesquisa(TipoChave c){
    for(int i=0; i<tamanho;i++){
        if(c == itens[i].GetChave()){
            return i;
        }
    }

    return -1;
}

void ListaArranjo::Imprime(){
    std::cout << "Os elementos da lista estao listados abaixo" << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
    for(int i=0; i<tamanho;i++){
        itens[i].Imprime();
        std::cout << "-------------------------------------------" << std::endl;
    }
}

void ListaArranjo::Limpa(){
    tamanho = 0;
}