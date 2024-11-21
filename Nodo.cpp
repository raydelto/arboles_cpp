#include "Nodo.h"

Nodo::Nodo(std::string nombre) : _nombre(nombre),
                                 _siguiente(nullptr),
                                 _primerHijo(nullptr),
                                 _ultimoHijo(nullptr),
                                 _profundidad(0)
{
}

void Nodo::AgregarHijo(Nodo *hijo)
{
    if (hijo == nullptr)
    {
        return;
    }

    hijo->_profundidad = _profundidad + 1;
    if (_primerHijo == nullptr)
    {
        _primerHijo = hijo;
    }
    else
    {
        _ultimoHijo->_siguiente = hijo;
    }
    _ultimoHijo = hijo;
}
std::string Nodo::GetNombre()
{
    return _nombre;
}

Nodo *Nodo::GetPrimerHijo()
{
    return _primerHijo;
}

Nodo *Nodo::GetSiguiente()
{
    return _siguiente;
}

uint8_t Nodo::GetProfundidad()
{
    return _profundidad;
}