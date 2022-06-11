#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void countSort(int * vet, int n, int maior);

int main(){
    int i,n,vet[10000],maior=-1;
    
    while(1){
        scanf("%d",&n);
        if(n == 0) break;
        
        for(i=0;i<n;i++){
            scanf("%d",&vet[i]);
        }

        for(i=0;i<n;i++){
            if(vet[i] > maior) maior = vet[i];
        }
        countSort(vet,n, maior);
        
        for(i=0;i<n;i++){
            printf("%d",vet[i]);
            if(i+1 != n) printf(" ");
        }
        printf("\n");
        maior = -1;
    }
    
    return 0;
}

void countSort(int * vet, int n, int maior){
    int * count;
    int * ord;
    int i, j;
    count = malloc((maior+1)*sizeof(int));
    ord = malloc(n*sizeof(int));

    for(i=0;i<maior+1;i++) count[i] = 0;
    
    for(i=0;i<n;i++) count[vet[i]]++;

    for(i=1;i<maior+1;i++) count[i] += count[i-1];

    for(i=0;i<n;i++){
        ord[count[vet[i]]-1] = vet[i];
        count[vet[i]]--;
    }

    for(i=0;i<n;i++) vet[i] = ord[i];
    free(count);
    free(ord);
}