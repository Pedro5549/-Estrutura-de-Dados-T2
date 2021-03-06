#ifndef __lista__
#define __lista__

typedef void* No;
typedef void* Lista;
typedef void* Info;


Lista createList();
//Inicializa a lista

void insert(Lista l, Info info);
//Insere um novo no na lista

No getFirst(Lista lista);
//Retorna o primeiro no da lista

No getNext(No elemento);
//Retorna o proximo no da lista

Info getInfo(No elemento);
//Retorna a informação armazenada no nó

No getLast(Lista lista);
//Retorna o ultimo no da lista

No getPrevious(No elemento);
//Retorna o no anterior

void insertAfter(Lista l, No elemento, Info info);
//isere um novo no depois do passado no parametro

void insertBefore(Lista l, No elemento, Info info);
//isere um novo no antes do passado no parametro

void removeNode(Lista l, No elemento);
//remove o no da lista

void removeList(Lista l);
//desaloca todos os no e a lista

#endif