#ifndef FILAARRANJO_HPP
#define FILAARRANJO_HPP

#include "fila.hpp"

class FilaArranjo : public Fila{
    public:
        FilaArranjo();

        void Enfilera(TipoDado dado);
        TipoDado Desenfilera();
        void Limpa();
    private:
        static const int MAXTAM = 100;
        TipoDado dados[MAXTAM];
        int frente;
        int fim;
};

#endif