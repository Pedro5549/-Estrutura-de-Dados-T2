#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "retangulo.h"
#include "circulo.h"
#include "texto.h"
#include "quadra.h"
#include "instrumentoUrbano.h"
#include "lista.h"
#include "svg.h"
#include "verificacao.h"

void intersecao(FILE* svg, FILE* txt, Lista list[7], int j, int k){
    No node;
    Info fig1, fig2, aux;
    char tipo1, tipo2;
    for(node = getFirst(list[0]); node != NULL; node = getNext(node)){
        aux = getInfo(node);
        if(getIdCirc(aux) == j){
            fig1 == aux;
            tipo1 = 'c';
        }
        else if(getIdCirc(aux) == k){
            fig2 == aux;
            tipo2 = 'c';
        }
    }
    for(node = getFirst(list[1]); node != NULL; node = getNext(node)){
        aux = getInfo(node);
        if(getIdRet(aux) == j){
            fig1 == aux;
            tipo1 = 'r';
        }
        else if(getIdRet(aux) == k){
            fig2 == aux;
            tipo2 = 'r';
        }
    }
    if(tipo1 == 'c'){
        if(tipo2 = 'c'){
            circuloInt(fig1, j, fig2, k, txt, svg);
        }
        else{
            retanguloIntCirculo(fig1, fig2, j, k, txt, svg);
        }
    }
    else{
        if(tipo2 = 'c'){
            retanguloIntCirculo(fig2, fig1, k, j, txt, svg);
        }
        else{
            retanguloInt(fig1, j, fig2, k, txt, svg);
        }
    }
}

void dq(FILE* svg,FILE* txt, Lista list[7],char cepid[], double r, int flag){
    Info info;
    No aux, node;
    int i, encontrado = 0;
    double x, y;
    switch (cepid[0]){
    case 'h':
        i = 4;
        break;
    case 's':
        i = 5;
        break;
    case 't':
        i = 6;
        break;
    }
    for(node = getFirst(list[i]); node != NULL; node = getNext(node)){
        info = getInfo(node);
        if(strcmp(getIdIU(info),cepid) == 0){
            x = getXIU(info);
            y = getYIU(info);
            encontrado = 0;

            break;
        }
    }
    if(!encontrado){
        fprintf(txt, "OBJETO NAO ENCONTRADO\n");
        return;
    }
    node = getFirst(list[3]);
    while(node != NULL){
        info = getInfo(node);
        if(quadraInternoCirc(info,x,y,r)){
            if(flag){
                
            }
            aux = node;
            node = getNext(node);
            removeNode(list[3], aux);
        }
        else{
            node = getNext(node);
        }
    }
}