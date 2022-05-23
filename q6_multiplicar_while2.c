/*questao 6 - Construa um programa em C ANSI que leia dez números inteiros e
imprima em tela a multiplicação dos números.
(Use while para resolução deste problema)*/

#include <stdio.h>
#include <stdlib.h>

int main () {

    int i = 1, armazenamentoUsuario  = 1, valorUsuario;

    while (i<=10){
        printf("Digite o %d valor: " , i);
        scanf("%d", &valorUsuario);
        
        armazenamentoUsuario *= valorUsuario;

        i++;

        printf("--- AQUI: %d \n", armazenamentoUsuario);
    }

    printf("Este e o resultado do armazenamento: %d", armazenamentoUsuario);

    return 0;
}

