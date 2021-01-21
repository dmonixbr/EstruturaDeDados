#include "../include/tipodado.hpp"
#include "../include/filaEncadeada.hpp"

int main(){
    FilaEncadeada fila = FilaEncadeada();
    TipoDado dado1 = TipoDado(1);
    TipoDado dado2 = TipoDado(2);
    TipoDado dado3 = TipoDado(3);
    TipoDado dado4 = TipoDado(4);
    TipoDado dado5 = TipoDado(5);
    TipoDado dado6 = TipoDado(6);
    TipoDado dado7 = TipoDado(7);
    TipoDado dado8 = TipoDado(8);

    TipoDado dadotroll = TipoDado(200);

    fila.Enfilera(dado1);
    fila.Enfilera(dado2);
    fila.Enfilera(dado3);
    fila.Enfilera(dado4);
    fila.Enfilera(dado5);
    fila.Enfilera(dado6);
    fila.Enfilera(dado7);
    fila.Enfilera(dado8);
    fila.Enfilera(dadotroll);

    TipoDado aux;

    while(!fila.Vazia()){
        aux = fila.Desenfilera();
        aux.Imprime();
    }

    //pilha.~PilhaEncadeada();

    return 0;
}