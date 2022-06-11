#include <stdio.h>

int main(){
    
    int par, n, i,k;
    scanf("%d %d",&par,&n);
    
    if (par%2!=0){
        printf("O PRIMEIRO NUMERO NAO E PAR\n");
        return 0;
    } 
    
    k=0;
    while(k<n){
        if(par%2==0){
            printf("%d ",par);
            k++;
        }
        par++;
    }
    printf("\n");
    return 0;
}