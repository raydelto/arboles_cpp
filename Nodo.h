#pragma once
#include <string>
#include <cstdint>

class Nodo
{
public:
    Nodo(std::string nombre);
    void AgregarHijo(Nodo *hijo);
    std::string GetNombre();
    Nodo* GetPrimerHijo();
    Nodo* GetSiguiente();
    uint8_t GetProfundidad();

private:
    std::string _nombre;
    Nodo *_siguiente;
    Nodo *_primerHijo;
    Nodo *_ultimoHijo;
    uint8_t _profundidad;
};
