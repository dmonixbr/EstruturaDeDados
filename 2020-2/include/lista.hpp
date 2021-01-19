#ifndef LISTA_HPP
#define LISTA_HPP

#include "tipodado.hpp"

class Lista{
    public:
        Lista() {tamanho = 0;};
        int GetTamanho() {return tamanho;};
        void IncrementaTamanho() {tamanho++;};
        void DecrementaTamanho() {tamanho--;};
        bool Vazia() {return tamanho == 0;};

        virtual TipoDado GetDado(int pos) = 0;
        virtual void SetDado(TipoDado dado, int pos) = 0;
        virtual void InsereInicio(TipoDado dado) = 0;
        virtual void InsereFinal(TipoDado dado) = 0;
        virtual void InserePosicao(TipoDado dado, int pos) = 0;
        virtual TipoDado RemoveInicio() = 0;
        virtual TipoDado RemoveFinal() = 0;
        virtual TipoDado RemovePosicao(int pos) = 0;
        virtual void Imprime() = 0;
        virtual void Limpa() = 0;
    protected:
        int tamanho;
};

#endif