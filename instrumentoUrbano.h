#ifndef __InstrumentoUrbano__
#define __InstrumentoUrbano__
#include <stdio.h>

typedef void* Instrumento;

Instrumento criarInstrumento(char id[], double x, double y, double espessura, char corp[], char corb[]);

char* getIdIU(Instrumento instrumento);

double getXIU(Instrumento instrumento);

void setXIU(Instrumento instrumento, double x);

double getYIU(Instrumento instrumento);

void setYIU(Instrumento instrumento, double y);

double getEspessuraIU(Instrumento instrumento);

void setEspessuraIU(Instrumento instrumento, double espessura);

char* getCorbIU(Instrumento instrumento);

void setCorbIU(Instrumento instrumento, char corb[]);

char* getCorpIU(Instrumento instrumento);

void setCorpIU(Instrumento instrumento, char corp[]);

void desenharIU(FILE* svg, Instrumento instrumento);

#endif