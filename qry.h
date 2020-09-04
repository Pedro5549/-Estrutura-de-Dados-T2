#ifndef __leitura__
#define __leitura__
#include <stdio.h>
#include "lista.h"
#include "retangulo.h"
#include "circulo.h"
#include "texto.h"
#include "quadra.h"
#include "instrumentoUrbano.h"

void intersecao(FILE* svg, FILE* txt, Lista list[7], int j, int k);

void dq(FILE* svg,FILE* txt, Lista list[7],char cepid[], double r, int flag);

#endif