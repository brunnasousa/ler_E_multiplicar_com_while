#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    int i=1, numero, s=0, multiplicação;

    while (i<=10){
        printf("digite o numero %i: ", i);
        scanf("%i", &numero);
        i++;
        s+=numero;
    }

    printf("%i\n", s*s/10);

    return 0;
}