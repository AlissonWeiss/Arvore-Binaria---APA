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

void Insere(TArvore ** arvore, TCor * cor, TDirecao direcao){

    if (EhVazia(*arvore) == True){
        *arvore = (TArvore*)malloc(sizeof(TArvore));
        (*arvore)->filho_dir = NULL;
        (*arvore)->filho_esq = NULL;
        (*arvore)->cor = cor;
    }
    else{

        if (ComparaDirecoes(direcao, Direita)){
            if ((*arvore)->filho_dir == NULL){
                Insere(&(*arvore)->filho_dir, cor, direcao);
            }
        }
        else{
            if ((*arvore)->filho_esq == NULL){
                Insere(&(*arvore)->filho_esq, cor, direcao);
            }
        }
    }
}

int ComparaDirecoes(TDirecao dir_1, TDirecao dir_2){

    if (dir_1 == dir_2){
        return 1;
    }
    return 0;

}

void ImprimirArvore(TArvore * arvore){
  if(!EhVazia(arvore)){

    printf("%d ", arvore->cor);
    ImprimirArvore(arvore->filho_esq);
    ImprimirArvore(arvore->filho_dir);
  }
}
