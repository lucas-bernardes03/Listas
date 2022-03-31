#include <stdio.h>
#define MAX 30

int busca(int * vet, int key, int n, int * pos);

int main(){
    int i, n, key,occ;
    int vet[MAX];
    int pos[MAX];

    printf("Quantos numeros deseja no vetor (MAX = 30)? ");
    scanf("%d",&n);

    printf("Digite os numeros: ");
    for(i=0;i<n;i++) scanf("%d",&vet[i]);
    printf("Digite a chave que deseja buscar: ");
    scanf("%d",&key);
    
    occ = busca(vet,key,n,pos);

    printf("O numero de ocorrencias foi: %d\n",occ);
    printf("Nas posicoes: ");
    for(i=0;i<occ;i++) printf("%d ",pos[i]);
    printf("\n");

    return 0;
}

int busca(int * vet, int key, int n, int * pos){
    int i,j=0,occ=0;

    for(i=0;i<n;i++){
        if(vet[i] == key){
            pos[j] = i;
            j++;
            occ++;
        } 
    }

    return occ;
}