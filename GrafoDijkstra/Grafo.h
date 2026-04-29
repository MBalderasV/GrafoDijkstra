#ifndef GRAFO_H
#define GRAFO_H

#include <vector>
#include <climits>

using namespace std;

class Grafo
{
private:
    int vertices;
    vector<vector<int>> matriz;

    int distanciaMin(vector<int>& distancia, vector<bool>& nodos);
    void imprimir(vector<int>& distancia);

public:
    Grafo(int vertices);
    void CrearArista(int origen, int destino, int costo, bool orden);
    void Dijkstra(int origen);
};

#endif
