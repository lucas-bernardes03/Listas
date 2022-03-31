#include <stdio.h>
#include <string.h>

#define MAX 30

typedef struct{
    char nome[30];
    int len;
}Nomes;

int length(Nomes * lista);
void insertionSort(Nomes * lista, int n);
void selectionSort(Nomes * lista, int n);

int main(){
    Nomes lista[MAX];
    int n,i;
    
    printf("Quantos nomes deseja inserir (MAX - 30)? ");
    scanf("%d%*c",&n);

    for(i=0;i<n;i++){
        scanf("%[^\n]%*c",lista[i].nome);
        lista[i].len = length(&lista[i]);
    } 

    printf("\n-------------FORA DE ORDEM-------------\n");
    for(i=0;i<n;i++){
        printf("Nome: %s\n",lista[i].nome);
        printf("Tamanho: %d\n\n",lista[i].len);
    }
    
    insertionSort(lista,n);
    printf("-------------INSERTION SORT-------------\n");

    for(i=0;i<n;i++){
        printf("Nome: %s\n",lista[i].nome);
        printf("Tamanho: %d\n\n",lista[i].len);
    }

    selectionSort(lista,n);
    printf("-------------SELECTION SORT (DECRESCENTE)-------------\n");

    for(i=0;i<n;i++){
        printf("Nome: %s\n",lista[i].nome);
        printf("Tamanho: %d\n\n",lista[i].len);
    }
    printf("----------------------------------------\n");


    return 0;
}

int length(Nomes * lista){
    return strlen(lista->nome);
}

void insertionSort(Nomes * lista, int n){
    int i, tam, j;
    Nomes aux;
    
    for (i=1;i<n;i++) {
        aux = lista[i];
        j = i-1;
 
        while (j >= 0 && lista[j].len > aux.len) {
            lista[j+1] = lista[j];
            j = j-1;
        }
        
        lista[j+1] = aux;
    }
}

void selectionSort(Nomes * lista, int n){
    int i, j, idx;
    Nomes aux;

    for (i = 0; i < n-1; i++){
        idx = i;
        for (j = i+1; j < n; j++)
          if (lista[j].len > lista[idx].len)
            idx = j;
  
        aux = lista[idx];
        lista[idx] = lista[i];
        lista[i] = aux;
    }
}