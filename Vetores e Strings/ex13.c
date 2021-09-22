#include <stdio.h>

int main(){
    int lista[1000];
    int n,i,k,index,cont;
    
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&lista[i]);
    }
    
    k = lista[0];
    index = 0;
    cont = 0;
    while(cont < n){
        for(i=0;i<n-cont;i++){
            if(lista[i] <= k){
                k=lista[i];
                index = i;
            } 
        }
        cont++;
        printf("%d\n",k);
        for(i=index;i<n-cont;i++){
            lista[i] = lista[i+1];
        }
        k=lista[0];
    }
    

    return 0;
}