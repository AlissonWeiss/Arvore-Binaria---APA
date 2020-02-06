#include <stdio.h>
#include <stdlib.h>
#include "arvore_b.c"

int main()
{
    TArvore * arvore = CriarArvore();

    printf("Digite a quantidade de nohs que a arvore tera: ");
    int n;
    scanf(" %d", &n);

    GerarArvoreAleatoria(&arvore, n);

    ImprimirArvore(arvore);

    return 0;
}
