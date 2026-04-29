// GrafoDijkstra.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
#include <iostream>
#include "Grafo.h"

using namespace std;

int main()
{
    Grafo test(9);

    test.CrearArista(0, 1, 4, false);
    test.CrearArista(0, 7, 8, false);
    test.CrearArista(1, 2, 8, false);
    test.CrearArista(1, 7, 11, false);
    test.CrearArista(2, 3, 7, false);
    test.CrearArista(2, 5, 4, false);
    test.CrearArista(2, 8, 2, false);
    test.CrearArista(3, 4, 9, false);
    test.CrearArista(3, 5, 14, false);
    test.CrearArista(4, 5, 10, false);
    test.CrearArista(5, 6, 2, false);
    test.CrearArista(6, 7, 1, false);
    test.CrearArista(6, 8, 6, false);
    test.CrearArista(7, 8, 7, false);

    test.Dijkstra(0);

    return 0;
}
