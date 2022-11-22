#include <stdio.h>
#include <stdlib.h>
#define T1 2
#define T2 2

int main(){
    int i,j;
    int matriz_a[T1][T2];
    float matriz_b[T1][T2];
 
    printf("digite os elementos da matriz\n");
        for(i=0;i<T1;i++){
            for(j=0;j<T2;j++){
                scanf("%d",&matriz_a[i][j]);
            }
        }
    for(i=0;i<T1;i++){
            for(j=0;j<T2;j++){
                if (matriz_a[i][j] % 2==0 ){
                    matriz_b[i][j] = matriz_a[i][j]*matriz_a[i][j];
                }else{
                    matriz_b[i][j] = matriz_a[i][j] / 2;
                }
            }
        }
       for ( i = 0; i < T1; i++){
        for ( j = 0; j < T2; j++){
            printf("%.1f\n",matriz_b[i][j]);
        }
    }
    system("PAUSE");
    return 0;
}