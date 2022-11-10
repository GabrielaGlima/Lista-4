/*2. Escrever um programa que leia uma matriz, seus elementos e sua dimensão. Em 
seguida, o programa deve:
a) Solicitar ao usuário o índice de uma linha (l) e um valor constante (c);
b) Multiplicar todos elementos da linha l por c;
c) Imprimir a matriz resultante.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int li,co,i,j,c=0,l;

    printf("escreva quantas linhas e colunas a matriz deve ter:\n");
    scanf("%d %d",&li,&co);
    
    int mp[li][co];

    for (i=0; i<li; i++){
        for (j=0; j<co; j++){
             printf("escrava os elementos da matriz:\n");
             scanf("%d",&mp[i][j]);
        }  
    }
    printf("qual linha deseja:\n");
    scanf("%d",&l);
    printf("qual o valor para a multiplicacao:\n");
    scanf("%d",&c);

    for ( j = 0; j < co; j++){
        mp[l][j]*=c;
    }
    
    for ( i = 0; i < li; i++){
        for ( j = 0; j <co; j++){
            printf("%d ", mp[i][j]);
        }
        printf("\n");
    }
    system("PAUSE");
    return 0;
}
