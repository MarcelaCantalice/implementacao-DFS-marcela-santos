#pragma once

#include "../grafo/grafo.h"

#define BRANCO -1
#define CINZA 0
#define PRETO 1

typedef struct {
  int ante[MAX_VERTICES];
  int i[MAX_VERTICES];
  int f[MAX_VERTICES];
  int cor[MAX_VERTICES];
  int tempo;
} DFS;

DFS *inicializarDFS();
void destruirDFS(DFS *dfs);

void dfs_start_matriz(DFS *dfs, Grafo *g, int s);
void dfs_visit_matriz(DFS *dfs, int u, Grafo *g);

void dfs_start_lista(DFS *dfs, Grafo *g, int s);
void dfs_visit_lista(DFS *dfs, int u, Grafo *g);
