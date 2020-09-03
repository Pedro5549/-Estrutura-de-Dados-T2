#ifndef __lista__
#define __lista__

typedef void* No;
typedef void* Lista;
typedef void* Info;


Lista createList();

void insert(Lista l, Info info);

void print(Lista l);

No getFirst(Lista lista);

No getNext(No elemento);

Info getInfo(No elemento);

No getLast(Lista lista);

No getPrevious(No elemento);

void insertAfter(Lista l, No elemento, Info info);

void insertBefore(Lista l, No elemento, Info info);

void removeNode(Lista l, No elemento);

void removeList(Lista l);

#endif