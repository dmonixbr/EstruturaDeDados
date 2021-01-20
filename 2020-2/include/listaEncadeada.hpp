#ifndef LISTAENCADEADA_HPP
#define LISTAENCADEADA_HPP

#include "lista.hpp"
#include "nodeDado.hpp"

class ListaEncadeada : public Lista{
    public:
        ListaEncadeada();
        ~ListaEncadeada();
        TipoDado GetDado(int pos);
        void SetDado(TipoDado dado, int pos);
        void InsereInicio(TipoDado dado);
        void InsereFinal(TipoDado dado);
        void InserePosicao(TipoDado dado, int pos);
        TipoDado RemoveInicio();
        TipoDado RemoveFinal();
        TipoDado RemovePosicao(int pos);
        void Imprime();
        TipoDado Pesquisa(int chave);
        void Limpa();
    private:
        NodeDado* primeiro;
        NodeDado* ultimo;
        NodeDado* Posiciona(int pos, bool antes);
};

#endif