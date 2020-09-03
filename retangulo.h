#ifndef __retangulo__
#define __retangulo__
#include <stdio.h>

typedef void* Retangulo;

Retangulo criarRetangulo(int id, double x, double y, double w, double h, double espessura, char corp[], char corb[]);

int getIdRet(Retangulo ret);

double getXRet(Retangulo ret);

void setXRet(Retangulo ret, double x);

double getYRet(Retangulo ret);

void setYRet(Retangulo ret, double y);

double getEspessuraRet(Retangulo ret);

void setEspessuraRet(Retangulo ret, double espessura);

double getWRet(Retangulo ret);

void setWRet(Retangulo ret, double w);

double getHRet(Retangulo ret);

void setHRet(Retangulo ret, double h);

char* getCorbRet(Retangulo ret);

void setCorbRet(Retangulo ret, char cor[]);

char* getCorpRet(Retangulo ret);

void setCorpRet(Retangulo ret, char cor[]);

void desenharRetangulo(FILE* svg, Retangulo retangulo);

#endif