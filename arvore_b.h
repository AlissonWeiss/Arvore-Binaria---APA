#ifndef ARVORE_B_H_INCLUDED
#define ARVORE_B_H_INCLUDED
#define True 1
#define False 0

typedef struct arvore{

    int valor;
    struct arvore * filho_esq;
    struct arvore * filho_dir;

}TArvore;

TArvore * CriarArvore();
int EhVazia(TArvore * arvore);
int EhFolha(TArvore * no);
void Insere(TArvore ** arvore, int valor);
void GerarArvoreAleatoria(TArvore * arvore);

#endif // ARVORE_B_H_INCLUDED
