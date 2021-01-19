#include "../include/tipodado.hpp"

TipoDado::TipoDado(){
    this->chave = 0;
}

TipoDado::TipoDado(int chave){
    this->chave = chave;
}

int TipoDado::GetChave(){
    return this->chave;
}

void TipoDado::SetChave(int chave){
    this->chave = chave;
}

void TipoDado::Imprime(){
    std::cout << this->chave << std::endl;
}