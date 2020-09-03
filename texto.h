#ifndef __texto__
#define __texto__
#include <stdio.h>

typedef void* Texto;

Texto criarTexto(int id, float x, float y, char corp[], char corb[], char txt[]);

int getIdTxt(Texto txt);

float getXTxt(Texto txt);

void setXTxt(Texto txt, float x);

float getYTxt(Texto txt);

void setYTxt(Texto txt, float y);

char* getCorbTxt(Texto txt);

void setCorbTxt(Texto txt, char cor[]);

char* getCorpTxt(Texto txt);

void setCorpTxt(Texto txt, char cor[]);

char* getTextoTxt(Texto txt);

void setTextoTxt(Texto txt, char linha[]);

void desenharTexto(FILE* svg, Texto txt);

#endif