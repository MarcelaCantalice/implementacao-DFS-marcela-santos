#include "matriz.h"

void inicializarMatrizAdj(bool matriz[MAX_VERTICES][MAX_VERTICES]) {
    for (int i = 0; i < MAX_VERTICES; i++) {
        for (int j = 0; j < MAX_VERTICES; j++) {
            matriz[i][j] = false;
        }
    }
}

bool inserirArestaMatriz(bool matriz[MAX_VERTICES][MAX_VERTICES], int origem, int destino) {
    if (origem < 0 || origem >= MAX_VERTICES ||
        destino < 0 || destino >= MAX_VERTICES) {
        return false;
    }

    if (matriz[origem][destino]) {
        return false;
    }

    matriz[origem][destino] = true;

    return true;
}

bool existeArestaMatriz(bool matriz[MAX_VERTICES][MAX_VERTICES], int origem, int destino) {
    if (origem < 0 || origem >= MAX_VERTICES ||
        destino < 0 || destino >= MAX_VERTICES) {
        return false;
    }

    return matriz[origem][destino];
}
