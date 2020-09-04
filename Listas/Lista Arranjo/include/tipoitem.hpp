#ifndef TIPOITEM_HPP
#define TIPOITEM_HPP

typedef int TipoChave;

class TipoItem{
    public:
        TipoItem();
        TipoItem(TipoChave c);
        void SetChave(TipoChave c);
        TipoChave GetChave();
        void Imprime();

    private:
        TipoChave chave;
        // Outros atributos do item
};

#endif