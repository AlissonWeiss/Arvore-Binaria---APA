#include "arvore_b.h"

TArvore * CriarArvore(){

    return NULL;

}
int EhVazia(TArvore * arvore){

    return arvore == NULL;

}

int EhFolha(TArvore * arvore){

    if (arvore != NULL && arvore->filho_dir == NULL && arvore->filho_esq == NULL){
        return True;
    }
    return False;
}

void Insere(TArvore ** arvore, int valor){

    if (EhVazia(*arvore) == True){
        *arvore = (TArvore*)malloc(sizeof(TArvore));
        (*arvore)->filho_dir = NULL;
        (*arvore)->filho_esq = NULL;
        (*arvore)->valor = valor;
    }
    else{
        printf("\nNOT IMPLEMENTED");
    }
}
