#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int *ab = malloc(sizeof(int));
    int *bc = malloc(sizeof(int));
    float *ac = malloc(sizeof(float));
    printf("longueur 1 en cm : ");
    scanf("%i", ab);
    printf("longueur 2 en cm : ");
    scanf("%i", bc);
    *ab = (*ab) * (*ab);
    *bc = (*bc) * (*bc);
    *ac = (*ab) + (*bc);
    printf("le triangle est rectangle en B, et l'hypothénuse vaut : %.2f cm \n", sqrt(*ac));
    free(ab);
    free(bc);
    free(ac);
}