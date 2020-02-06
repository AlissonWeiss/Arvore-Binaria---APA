#ifndef ARVORE_B_H_INCLUDED
#define ARVORE_B_H_INCLUDED
#define True 1
#define False 0

typedef enum cor {Azul = 0, Vermelho}TCor;
typedef enum direcao {Esquerda = 0, Direita}TDirecao;

typedef struct arvore{

    TCor * cor;
    struct arvore * filho_esq;
    struct arvore * filho_dir;

}TArvore;

TArvore * CriarArvore();
int EhVazia(TArvore * arvore);
int EhFolha(TArvore * no);
void Insere(TArvore ** arvore, TCor * cor, TDirecao direcao);
void GerarArvoreAleatoria(TArvore * arvore, int n);
void ImprimirArvore(TArvore * arvore);

int ComparaDirecoes(TDirecao dir_1, TDirecao dir_2);

#endif // ARVORE_B_H_INCLUDED
