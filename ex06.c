#include <stdio.h>
#include <stdlib.h>
#define T1 2
#define T2 2

int main(){
    int i,j;
    float matriz[T1][T2],soma_coluna[T2];
    
    printf("digite os elementos da matriz\n");
        for(i=0;i<T1;i++){
            for(j=0;j<T2;j++){
                scanf("%d",&matriz[i][j]);
            }
        }
        for ( i = 0; i < T1; i++){
            soma_coluna[j] +=matriz[i][j];
            for(j=0;j<T2;j++){
            }
        }
        
        
        for ( i = 0; i < T2; i++){
            printf("%.2f",soma_coluna[j]);
        }
       
    system("PAUSE");
    return 0;
}