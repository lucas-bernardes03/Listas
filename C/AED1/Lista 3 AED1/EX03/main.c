#include <stdio.h>

#define MAX 5

void merge(int v[], int l, int m, int r);
void mergeSort(int v[], int l, int r);


int main(){
    int v1[MAX],v2[MAX],v3[MAX],vfinal[MAX*3];
    int i,j;
    printf("MAX de cada vetor: %d",MAX);
    
    printf("\nVetor 1: ");
    for(i=0;i<MAX;i++) scanf("%d",&v1[i]);
    printf("\nVetor 2: ");
    for(i=0;i<MAX;i++) scanf("%d",&v2[i]);
    printf("\nVetor 3: ");
    for(i=0;i<MAX;i++) scanf("%d",&v3[i]);

    for(i=0;i<MAX;i++) vfinal[i] = v1[i];
    for(j=0;j<MAX;j++){
        vfinal[i] = v2[j];
        i++;
    }
    for(j=0;j<MAX;j++){
        vfinal[i] = v3[j];
        i++;
    }

    mergeSort(vfinal,0,(MAX*3)-1);

    printf("Vetor ordenado: ");
    for(i=0;i<MAX*3;i++) printf("%d ",vfinal[i]);
    printf("\n");

    return 0;
}

void merge(int v[], int l, int m, int r){
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];
  
    for (i = 0; i < n1; i++) L[i] = v[l + i];
    for (j = 0; j < n2; j++) R[j] = v[m + 1 + j];
  
    i = 0;
    j = 0; 
    k = l; 

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            v[k] = L[i];
            i++;
        }
        else {
            v[k] = R[j];
            j++;
        }
        k++;
    }
  
    while (i < n1) {
        v[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        v[k] = R[j];
        j++;
        k++;
    }
}
  
void mergeSort(int v[], int l, int r){
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(v, l, m);
        mergeSort(v, m + 1, r);
        merge(v, l, m, r);
    }
}