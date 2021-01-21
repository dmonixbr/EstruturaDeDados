#include "../include/tipodado.hpp"
#include "../include/pilhaEncadeada.hpp"

int main(){
    PilhaEncadeada pilha = PilhaEncadeada();
    TipoDado dado1 = TipoDado(1);
    TipoDado dado2 = TipoDado(2);
    TipoDado dado3 = TipoDado(3);
    TipoDado dado4 = TipoDado(4);
    TipoDado dado5 = TipoDado(5);
    TipoDado dado6 = TipoDado(6);
    TipoDado dado7 = TipoDado(7);
    TipoDado dado8 = TipoDado(8);

    TipoDado dadotroll = TipoDado(200);

    pilha.Empilha(dado1);
    pilha.Empilha(dado2);
    pilha.Empilha(dado3);
    pilha.Empilha(dado4);
    pilha.Empilha(dado5);
    pilha.Empilha(dado6);
    pilha.Empilha(dado7);
    pilha.Empilha(dado8);
    pilha.Empilha(dadotroll);

    TipoDado aux;

    while(!pilha.Vazia()){
        aux = pilha.Desempilha();
        aux.Imprime();
    }

    //pilha.~PilhaEncadeada();

    return 0;
}