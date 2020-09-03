#ifndef __circulo__
#define __circulo__
#include <stdio.h>

typedef void* Circulo;

Circulo criarCirculo(int id, double x, double y, double r, double espessura, char corp[], char corb[]);

int getIdCirc(Circulo circ);

double getXCirc(Circulo circ);

void setXCirc(Circulo circ, double x);

double getYCirc(Circulo circ);

void setYCirc(Circulo circ, double y);

double getRCirc(Circulo circ);

void setRCirc(Circulo circ, double r);

double getEspessuraCirc(Circulo circ);

void setEspessuraCirc(Circulo circ, double espessura);

char* getCorbCirc(Circulo circ);

void setCorbCirc(Circulo circ, char cor[]);

char* getCorpCirc(Circulo circ);

void setCorpCirc(Circulo circ, char cor[]);

void desenharCirculo(FILE* svg, Circulo circulo);

#endif