#include "Grafo.h"
#include <iostream>

using namespace std;

Grafo::Grafo(int vertices)
{
    this->vertices = vertices;
    matriz.resize(vertices, vector<int>(vertices, 0));
}

void Grafo::CrearArista(int origen, int destino, int costo, bool orden)
{
    matriz[origen][destino] = costo;
    if (!orden)
    {
        matriz[destino][origen] = costo;
    }
}

int Grafo::distanciaMin(vector<int>& distancia, vector<bool>& nodos)
{
    // Initialize min value
    int min = INT_MAX, min_index = -1;

    for (int i = 0; i < vertices; i++)
        if (nodos[i] == false && distancia[i] <= min)
        {
            min = distancia[i];
            min_index = i;
        }

    return min_index;
}

void Grafo::imprimir(vector<int>& distancia)
{
    cout << "Vertice \t Distancia desde origen" << endl;
    for (int i = 0; i < vertices; i++)
        cout << i << "\t\t" << distancia[i] << endl;
}

void Grafo::Dijkstra(int origen)
{
    vector<bool> nodos(vertices, false);
    vector<int> distancia(vertices, INT_MAX);

    distancia[origen] = 0;

    for (int i = 0; i < vertices - 1; i++)
    {
        int u = distanciaMin(distancia, nodos);

        nodos[u] = true;

        for (int j = 0; j < vertices; j++)
        {
            if (!nodos[j] && matriz[u][j] != 0 &&
                distancia[u] != INT_MAX && distancia[u] + matriz[u][j] < distancia[j])
            {
                distancia[j] = distancia[u] + matriz[u][j];
            }
        }
    }
    imprimir(distancia);
}
