#ifndef PILHAARRANJO_HPP
#define PILHAARRANJO_HPP

#include "pilha.hpp"

class PilhaArranjo : public Pilha{
    public:
        PilhaArranjo();

        void Empilha(TipoDado dado);
        TipoDado Desempilha();
        void Limpa();

    private:
        int topo;
        static const int MAXTAM = 100;
        TipoDado dados[MAXTAM];
};

#endif