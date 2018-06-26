#ifndef LISTA_DUPLAMENTE_ENCADEADA_H_INCLUDED
#define LISTA_DUPLAMENTE_ENCADEADA_H_INCLUDED


typedef int TIPOCHAVE;

typedef struct{
    TIPOCHAVE chave;
}REGISTRO;

typedef struct aux{
    REGISTRO reg;
    struct aux* prox;
    struct aux* ant;
}ELEMENTO;

typedef ELEMENTO* PONT;

typedef struct{
        PONT inicio;
}LISTA;

void inicializarLista(LISTA *l);
void inserir_elemento(LISTA *l, REGISTRO reg);
void inserir_elemento_ordendo(LISTA *l, REGISTRO reg);
PONT busca_elemento(LISTA *l, TIPOCHAVE ch);
int excluir_elemento(LISTA *l, TIPOCHAVE ch);
void imprimir(LISTA *l);
void reinicializar(LISTA *l);



#endif // LISTA_DUPLAMENTE_ENCADEADA_H_INCLUDED
