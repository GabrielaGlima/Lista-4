/*1. Escreva um programa que declare uma matriz (5 × 5) e inicialize cada posição 
com o valor 0. Em seguida, o usuário deve digitar o índice da linha e da coluna e 
o valor da posição.
• A leitura será feita enquanto os índices forem não negativos.
• Após a leitura o programa deve imprimir a matriz na tela.*/
#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int main(){
    int m[TAM][TAM],i,j;

    for (i=0; i<TAM; i++){
        for (j=0; j<TAM; j++)
            m[i][j] = 0;
    }
        printf("digite o indice da coluna e da linha:\n");
        scanf("%d %d",&i,&j);

        while ((i>=0) && (j>=0)){
        printf("digite o valor da posicao(%d,%d):\n",i,j);
        scanf("%d",&m[i][j]);
        printf("digite o indice da coluna e da linha:\n");
        scanf("%d %d",&i,&j);
    
    
        }
    for ( i = 0; i < TAM; i++){
        for ( j = 0; j < TAM; j++){
            printf("%d ",m[i][j]);
        }
            printf("\n");
    }
    system("PAUSE");
    return 0;
}