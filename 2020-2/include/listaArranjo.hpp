#ifndef LISTAARRANJO_HPP
#define LISTAARRANJO_HPP

#include "lista.hpp"

class ListaArranjo : public Lista{
    public:
        ListaArranjo() : Lista(){};
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
        static const int MAXTAM = 100;
        TipoDado dados[MAXTAM];
};


#endif