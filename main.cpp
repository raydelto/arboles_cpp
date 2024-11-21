#include "Arbol.h"

int main()
{
    Nodo raiz("Raíz");
    
    Nodo musica("Música");
    raiz.AgregarHijo(&musica);
    Arbol arbol(&raiz);
    Nodo merengue("Merengue");
    Nodo bachata("Bachata");
    Nodo salsa("Salsa");

    musica.AgregarHijo(&merengue);
    musica.AgregarHijo(&bachata);
    musica.AgregarHijo(&salsa);
    
    Nodo documentos("Documentos");
    Nodo itla("ITLA");
    Nodo iglesia("Iglesia");
    Nodo familiares("Familiares");
    Nodo trabajo("Trabajo");

    raiz.AgregarHijo(&documentos);
    documentos.AgregarHijo(&itla);
    documentos.AgregarHijo(&iglesia);
    documentos.AgregarHijo(&familiares);
    documentos.AgregarHijo(&trabajo);

    
    
    arbol.Recorrer();
    return 0;
}