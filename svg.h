#ifndef __svg__
#define __svg__
#include <stdio.h>
#include "lista.h"

FILE* iniciarSvg(char filename[]);

void fecharSvg(FILE* svg);

void desenharSvg(FILE* svg, Lista list[7]);

#endif