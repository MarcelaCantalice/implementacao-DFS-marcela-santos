#pragma once

#include <stdbool.h>

#ifndef MAX_VERTICES
#define MAX_VERTICES 6
#endif

void inicializarMatrizAdj(bool matriz[MAX_VERTICES][MAX_VERTICES]);
bool inserirArestaMatriz(bool matriz[MAX_VERTICES][MAX_VERTICES], int origem, int destino);
bool existeArestaMatriz(bool matriz[MAX_VERTICES][MAX_VERTICES], int origem, int destino);
