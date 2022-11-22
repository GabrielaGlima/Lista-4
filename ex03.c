/*3. Criar um algoritmo que leia os elementos de uma matriz inteira 10 x 10 e 
imprima:
a) Os elementos da diagonal principal e acima
b) Os elementos da diagonal principal e abaixo
c) Os elementos da diagonal secundária
d) Os elementos das diagonais primária e secundária*/
#include <stdio.h>
#include <stdlib.h>
#define T 10

int main(){
    int i,j;
    int matriz[T][T];
 
    printf("digite os elementos da matriz\n");
        for(i=0;i<T;i++){
            for(j=0;j<T;j++){
                scanf("%d",&matriz[i][j]);
            }
        }
    printf("----Diagonal principal acima----\n");
        for(i=0;i<T;i++){
            for(j=0;j<T;j++){
                if((i==j) || (j>i)){
                    printf("%d\n",matriz[i][j]);
                }
            }
        }   
    printf("----Diagonal principal abaixo----\n");
        for(i=0;i<T;i++){
            for(j=0;j<T;j++){
                if((i==j) || (j<i)){
                    printf("%d\n",matriz[i][j]);
                }
            }
        }   
    printf("----Diagonal secundaria----\n");
        for(i=0;i<T;i++){
            for(j=0;j<T;j++){
                if(i+j==T-1){
                    printf("%d\n",matriz[i][j]);
                }
            }
        }
    printf("----Diagonal principal e segundaria----\n");
        for(i=0;i<T;i++){
            for(j=0;j<T;j++){
                if(i==j){
                    printf("%d\n",matriz[i][j]);
                }
                if(i+j==T-1){
                    printf("%d\n",matriz[i][j]);
                }
            }
        }
    system("PAUSE");
    return 0;
}