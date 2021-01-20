#ifndef NODEDADO_HPP
#define NODEDADO_HPP

#include "tipodado.hpp"

class NodeDado{
    public:
        NodeDado();
    private:
        TipoDado dado;
        NodeDado *proximo;

    friend class ListaEncadeada;
};


#endif