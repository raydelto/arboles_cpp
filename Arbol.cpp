#include "Arbol.h"
#include <iostream>

Arbol::Arbol(Nodo *raiz) : _raiz(raiz)
{
}

void Arbol::Recorrer(Nodo *nodo)
{
    if (nodo == nullptr)
    {
        return;
    }

    for (int i = 0; i < nodo->GetProfundidad(); i++)
    {
        std::cout << "\t";
    }

    std::cout << nodo->GetNombre() << std::endl;
    Nodo *i = nodo->GetPrimerHijo();
    while (i != nullptr)
    {
        Recorrer(i);
        i = i->GetSiguiente();
    }
}

void Arbol::Recorrer()
{
    Recorrer(_raiz);
}