#include "../include/tipodado.hpp"
#include "../include/listaEncadeada.hpp"

int main(){
    ListaEncadeada lista = ListaEncadeada();
    TipoDado dado1 = TipoDado(1);
    TipoDado dado2 = TipoDado(2);
    TipoDado dado3 = TipoDado(3);
    TipoDado dado4 = TipoDado(4);
    TipoDado dado5 = TipoDado(5);
    TipoDado dado6 = TipoDado(6);
    TipoDado dado7 = TipoDado(7);
    TipoDado dado8 = TipoDado(8);

    TipoDado dadotroll = TipoDado(200);

    lista.InsereFinal(dado1);
    lista.InsereFinal(dado2);
    lista.InsereFinal(dado3);
    lista.InsereFinal(dado4);
    lista.InsereFinal(dado5);
    lista.InsereFinal(dado6);
    lista.InsereFinal(dado7);
    lista.InsereFinal(dado8);
    lista.InsereFinal(dadotroll);

    lista.Imprime();

    std::cout << "\n";

    lista.Limpa();

    std::cout << "\n";

    std::cout << lista.GetTamanho() << std::endl;

    return 0;
}