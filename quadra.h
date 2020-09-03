#ifndef __quadra__
#define __quadra__
#include <stdio.h>

typedef void* Quadra;

Quadra criarQuadra(char cep[], double x, double y, double espessura, double w, double h, char corp[], char corb[]);

char* getCEP(Quadra quadra);

double getXQuad(Quadra quadra);

void setXQuad(Quadra quadra, double x);

double getYQuad(Quadra quadra);

void setYQuad(Quadra quadra, double y);

double getWQuad(Quadra quadra);

void setWQuad(Quadra quadra, double w);

double getHQuad(Quadra quadra);

void setHQuad(Quadra quadra, double h);

double getEspessuraQuad(Quadra quadra);

void setEspessuraQuad(Quadra quadra, double espessura);

char* getCorbQuad(Quadra quadra);

void setCorbQuad(Quadra quadra, char corb[]);

char* getCorpQuad(Quadra quadra);

void setCorpQuad(Quadra quadra, char corp[]);

void desenharQuadra(FILE* svg, Quadra quadra);

#endif