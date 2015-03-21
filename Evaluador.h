#ifndef EVALUADOR_H
#define EVALUADOR_H

//#include "NodoArbolBinario.h"
//#include "NodoArbolNArio.h"
#include <iostream>       // std::cin, std::cout
#include <set>       // std::cin, std::cout
#include <vector>       // std::cin, std::cout

using namespace std;

void evaluar();

int obtenerDistanciaAristaDirecta(int grafo[5][5], int inicio, int destino);

vector<int> obtenerListaDeAristas(int grafo[5][5], int inicio);

bool existeCamino(int grafo[5][5], int inicio, int destino,int profundidad);

#endif // EVALUADOR_H
