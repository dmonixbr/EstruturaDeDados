#include "../include/tipodado.hpp"
#include "../include/listaArranjo.hpp"

int main(){
    ListaArranjo lista = ListaArranjo();
    TipoDado dado1 = TipoDado(1);
    TipoDado dado2 = TipoDado(2);
    TipoDado dado3 = TipoDado(3);
    TipoDado dado4 = TipoDado(4);
    TipoDado dado5 = TipoDado(5);
    TipoDado dado6 = TipoDado(6);
    TipoDado dado7 = TipoDado(7);
    TipoDado dado8 = TipoDado(8);

    TipoDado dadotroll = TipoDado(200);

    lista.InsereInicio(dado1);
    lista.InsereInicio(dado2);
    lista.InsereInicio(dado3);
    lista.InsereInicio(dado4);
    lista.InsereInicio(dado5);
    lista.InsereInicio(dado6);
    lista.InsereInicio(dado7);
    lista.InsereInicio(dado8);

    std::cout << "\n";

    TipoDado aux;
    aux = lista.Pesquisa(200);

    lista.InsereFinal(dadotroll);

    aux = lista.Pesquisa(200);

    lista.Limpa();

    lista.Imprime();

    return 0;
}