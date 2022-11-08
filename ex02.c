#include <stdio.h>

int main(){
    int li,co,i,j,c=0,l;

    printf("escreva quantas linhas e colunas a matriz deve ter:\n");
    scanf("%d %d",&li,&co);
    
    int mp[li][co],maux[li][co];

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

    for ( i = 0; i < l; i++){
        for ( j = 0; j <co; j++){
            maux[i][j]=c;
        }
        
    }
    
    for ( i = 0; i <li; i++){
        for ( j = 0; j < co; j++){
          maux[i][j]=m[i][j] *c;
        }
        
    }
    
    return 0;
}
