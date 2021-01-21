#ifndef PILHAENCADEADA_HPP
#define PILHAENCADEADA_HPP

#include "pilha.hpp"
#include "nodeDado.hpp"

class PilhaEncadeada : public Pilha{
    public:
        PilhaEncadeada();
        ~PilhaEncadeada();

        void Empilha(TipoDado dado);
        TipoDado Desempilha();
        void Limpa();

    private:
        NodeDado *topo;
};

#endif