/*Exemplo 4: escreva um programa que declare e preencha uma matriz quadrada 
com valores fornecidos pelo usuário. Em seguida, o programa deve imprimir os 
elementos da diagonal principal e da diagonal secundária*/
#include <stdio.h>
#include <stdlib.h>

int main(){
int i,j,m,n;
printf("----Matriz deve ser quandrada----\n");
printf("Insira quantas linha:\n");
scanf("%d",&m);
printf("Insira quantas coluna:\n");
scanf("%d",&n);

int matriz[m][n];

for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        scanf("%d",&matriz[i][j]);
    }
}
printf("----Diagonal principal----\n");
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        if(i==j){
            printf("%d\n",matriz[i][j]);
        }
    }
}
printf("----Diagonal secundaria----\n");
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        if(i+j==m-1){
            printf("%d\n",matriz[i][j]);
        }
    }
}


return 0;
}

