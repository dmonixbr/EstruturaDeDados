#ifndef TIPODADO_HPP
#define TIPODADO_HPP

#include <iostream>

class TipoDado{
    public:
        TipoDado();
        TipoDado(int chave);
        int GetChave();
        void SetChave(int chave);
        void Imprime();
    private:
        int chave;
};

#endif