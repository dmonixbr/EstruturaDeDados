#ifndef TIPONO_HPP
#define TIPONO_HPP

#include "tipodado.hpp"

class TipoNo{
    public:
        TipoNo();
    private:
        TipoDado dado;
        TipoNo *esq;
        TipoNo *dir;

    friend class ArvoreBinaria;
};


#endif