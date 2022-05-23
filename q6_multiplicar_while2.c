/*questao 6 - Construa um programa em C ANSI que leia dez números inteiros e
imprima em tela a multiplicação dos números.
(Use while para resolução deste problema)*/

#include <stdio.h>
#include <stdlib.h>

int main () {

    int i = 1, armazenamentoValorUsuario  = 1, valorUsuario;

    while (i<=10){
        printf("Digite o %d valor: " , i);
        scanf("%d", &valorUsuario);
        
        armazenamentoValorUsuario *= valorUsuario;

        i++;
    }

    printf("Este e o resultado da multiplicação: %d", armazenamentoValorUsuario);

    return 0;

    //Feito em 21/05/2022 By: brunnasousa e imxder (github)
}

