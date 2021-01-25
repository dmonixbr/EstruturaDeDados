#ifndef ARVOREBINARIA_HPP
#define ARVOREBINARIA_HPP

#include "tipoNo.hpp"

class ArvoreBinaria{
    public:
        ArvoreBinaria();
        ~ArvoreBinaria();

        void Insere(TipoDado dado);
        void Caminha(int tipo);
        void Limpa();
    private:
        void InsereRecursivo(TipoNo* &p, TipoDado dado);
        void ApagaRecursivo(TipoNo* p);
        void PreOrdem(TipoNo* p);
        void InOrdem(TipoNo* p);
        void PosOrdem(TipoNo* p);

        TipoNo *raiz;
};

#endif