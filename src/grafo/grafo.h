#pragma once

#include "../lista/lista.h"
#include "../matriz/matriz.h"
#include <stdbool.h>

#ifndef MAX_VERTICES
#define MAX_VERTICES 6
#endif

typedef struct {
  No *listaAdj[MAX_VERTICES];
  bool matrizAdj[MAX_VERTICES][MAX_VERTICES];
} Grafo;

Grafo *criarGrafo();
bool inserirAresta(Grafo *g, int origem, int destino);
bool existeAresta(Grafo *g, int origem, int destino);
void destruirGrafo(Grafo *g);