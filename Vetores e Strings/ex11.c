#include <stdio.h>

int main(){
    int notas[10000];
    int n,i,un,mn,k,j;
    
    k=0;
    j=0;
    
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        scanf("%d",&notas[i]);
    }
    
    un = notas[n-1];
    mn = 0;
    
    for(i=n-1;i>=0;i--){
        if(notas[i] == un) k++;
        if(notas[i] >= mn){
            mn = notas[i];
            j = i;
        } 
    }
    printf("Nota %d, %d vezes\n",un,k);
    printf("Nota %d, indice %d\n",mn,j);
    return 0;
}