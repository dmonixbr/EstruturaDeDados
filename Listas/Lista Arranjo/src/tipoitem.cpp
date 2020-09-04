#include "../include/tipoitem.hpp"

TipoItem::TipoItem(TipoChave _chave){
    this->chave = _chave;
}

void TipoItem::SetChave(TipoChave _chave){
    this->chave = _chave;
}

TipoChave TipoItem::GetChave(){
    return this->chave;
}

void TipoItem::Imprime(){
    std::cout << "A chave do Item eh " << this->chave << std::endl;
}