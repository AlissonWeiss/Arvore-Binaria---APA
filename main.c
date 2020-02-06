#include <stdio.h>
#include <stdlib.h>
#include "arvore_b.c"

int main()
{
    TArvore * arvore = CriarArvore();
    TCor * cor;

    Insere(&arvore, Azul, Esquerda);
    Insere(&arvore, Vermelho, Direita);
    Insere(&arvore, Azul, Esquerda);


    ImprimirArvore(arvore);

    return 0;
}
