#include <stdio.h>
#include <stdlib.h>

#define MAX 30

typedef struct _pessoa_ {
    unsigned int Matricula;
    float Nota;
} Aluno;

void quickSort(Aluno * aluno, int low, int high); 
void merge(Aluno * aluno, int l, int m, int r);
int partition(Aluno * aluno, int low, int high);
void mergeSort(Aluno * aluno, int l, int r);
void swap(Aluno *a, Aluno *b);


int main(){
    int n,i;
    Aluno aluno[MAX];

    printf("\nQuantos alunos? ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("Aluno %d\n",i);
        printf("Matricula: ");
        scanf("%u",&aluno[i].Matricula);
        printf("Nota: ");
        scanf("%f",&aluno[i].Nota);
        printf("\n");
    }

    printf("-------------------------------\n");
    printf("QuickSort... (NOTA)\n\n");
    quickSort(aluno,0,n-1);

    for(i=0;i<n;i++){
        printf("Matricula: %u\n",aluno[i].Matricula);
        printf("Nota: %.2f\n\n",aluno[i].Nota);
    }

    printf("-------------------------------\n");

    printf("MergeSort... (MATRICULA)\n\n");
    mergeSort(aluno,0,n-1);

    for(i=0;i<n;i++){
        printf("Matricula: %u\n",aluno[i].Matricula);
        printf("Nota: %.2f\n\n",aluno[i].Nota);
    }

    printf("-------------------------------\n");


    return 0;
}

void swap(Aluno *a, Aluno *b) {
  Aluno t = *a;
  *a = *b;
  *b = t;
}


int partition(Aluno * aluno, int low, int high) {
  int pivot = aluno[high].Nota;
  int i = (low - 1);

  for (int j = low; j < high; j++) {
    if (aluno[j].Nota <= pivot) {
      i++;
      swap(&aluno[i], &aluno[j]);
    }
  }

  swap(&aluno[i + 1], &aluno[high]);
  
  return (i + 1);
}

void quickSort(Aluno * aluno, int low, int high) {
    if (low < high) {
        int pi = partition(aluno, low, high);
        quickSort(aluno, low, pi - 1);
        quickSort(aluno, pi + 1, high);
    }
}

void merge(Aluno * aluno, int l, int m, int r){
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    Aluno L[n1], R[n2];
  
    for (i = 0; i < n1; i++) L[i] = aluno[l + i];
    for (j = 0; j < n2; j++) R[j] = aluno[m + 1 + j];
  
    i = 0; 
    j = 0; 
    k = l; 
    
    while (i < n1 && j < n2) {
        if (L[i].Matricula <= R[j].Matricula) {
            aluno[k] = L[i];
            i++;
        }
        else {
            aluno[k] = R[j];
            j++;
        }
        k++;
    }
  
    while (i < n1) {
        aluno[k] = L[i];
        i++;
        k++;
    }
  
    while (j < n2) {
        aluno[k] = R[j];
        j++;
        k++;
    }
}
  
void mergeSort(Aluno * aluno, int l, int r){
    if (l < r) {
        int m = l + (r - l) / 2;
  
        mergeSort(aluno, l, m);
        mergeSort(aluno, m + 1, r);
  
        merge(aluno, l, m, r);
    }
}


