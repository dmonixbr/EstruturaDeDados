#ifndef FILA_HPP
#define FILA_HPP

#include "tipodado.hpp"

class Fila{
    public:
        Fila(){ tamanho = 0; };
        int GetTamanho(){ return tamanho;};
        bool Vazia() {return tamanho == 0;};

        virtual void Enfilera(TipoDado dado) = 0;
        virtual TipoDado Desenfilera() = 0;
        virtual void Limpa() = 0;
    protected:
        int tamanho;
};

#endif