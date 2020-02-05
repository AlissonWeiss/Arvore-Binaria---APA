#include <stdio.h>
#include <stdlib.h>
#include "arvore_b.c"

int main()
{
    TArvore * arvore = CriarArvore();

    Insere(&arvore, 2);

    printf("%d", arvore->valor);

    return 0;
}
