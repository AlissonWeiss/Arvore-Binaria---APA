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

int GerarDirecao(){

    int aux = rand();
    if (aux % 2 == 0){
        return Direita;
    }
    return Esquerda;
}

int GerarCor(){

    int aux = rand();
    if (aux % 2 == 0){
        return Azul;
    }
    return Vermelho;
}

void Insere(TArvore ** arvore, TCor cor){

    if (EhVazia(*arvore)){
        (*arvore) = (TArvore*)malloc(sizeof(TArvore));
        (*arvore)->filho_dir = NULL;
        (*arvore)->filho_esq = NULL;
        (*arvore)->cor = cor;
    }
    else{

        TDirecao direcao = GerarDirecao();

        if (ComparaDirecoes(direcao, Direita)){
            Insere(&(*arvore)->filho_dir, cor);
        }
        else{
            Insere(&(*arvore)->filho_esq, cor);
        }
    }
}
void GerarArvoreAleatoria(TArvore * arvore, int n){

    for(int i = 0; i < n; i++){
        Insere(arvore, GerarCor());
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
