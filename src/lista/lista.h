#pragma once

#include <stdbool.h>

#ifndef MAX_VERTICES
#define MAX_VERTICES 6
#endif

typedef struct No {
  int vertice;
  struct No *proximo;
} No;

No *criarNo(int vertice);
void inicializarListaAdj(No *lista[]);
void destruirListaAdj(No **lista);