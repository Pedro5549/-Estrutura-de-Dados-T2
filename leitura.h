#ifndef __leitura__
#define __leitura__
#include <stdio.h>
#include <string.h>
#include "lista.h"

char *obterNomeArquivo(char path[]);

void geo(Lista list[7], char geoArq[], char saida[]);

void qry(Lista list[7], char path[], char nomeSaida[]);

void tratamento(char path[], char outPath[], char paramGeo[], char paramQry[]);

#endif