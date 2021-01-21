#ifndef FILAENCADEADA_HPP
#define FILAENCADEADA_HPP

#include "fila.hpp"
#include "nodeDado.hpp"

class FilaEncadeada : public Fila{
    public:
        FilaEncadeada();
        ~FilaEncadeada();

        void Enfilera(TipoDado dado);
        TipoDado Desenfilera();
        void Limpa();
    private:
        NodeDado *frente;
        NodeDado *fim;
};

#endif