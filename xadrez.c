#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

//nem sei se tinha alguma outra forma, mas funcionou
void mova(int a){
        if (a > 0){
            printf("Direita\n");
            mova(a - 1);
        }
    }

void movaB(int b){
        if (b > 0){
            printf("Esquerda\n");
            movaB(b - 1);
        }
    }

void movaC(int c){
        if (c > 0){
            printf("Direita e Cima\n");
            movaC(c - 1);
        }
    }

int main() {
    int C;

    printf("Torre: \n");
    mova(5);

    printf("\nRainha: \n");
    movaB(8);

    printf("\nBispo: \n");
    movaC(5);

//Nível Aventureiro
    printf("\nCavalo: \n");
    {
        while (C--);
            for (int i = 0; i != 2; i++)
        {
            printf("Cima\n");
        }
        printf("Direita\n");
    }
    return 0;
}