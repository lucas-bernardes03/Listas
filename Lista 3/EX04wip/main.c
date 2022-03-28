#include <stdio.h>
#include <stdlib.h>

typedef struct _pessoa_ {
    unsigned int Matricula;
    float Nota;
} Aluno;

void quickSort(Aluno * aluno, int low, int high); 
int partition(Aluno * aluno, int low, int high);
void swap(Aluno *a, Aluno *b);


int main(){
    int n,i;
    Aluno * aluno;
    
    printf("Quantos alunos? ");
    scanf("%d",&n);
    aluno = (Aluno*)malloc(sizeof(Aluno)*n);

    for(i=0;i<n;i++){
        printf("\nAluno %d: \n",i);
        printf("Matricula: ");
        scanf("%u",&aluno[i].Matricula);
        printf("Nota: ");
        scanf("%f",&aluno[i].Nota);
    }

    for(i=0;i<n;i++){
        printf("\nAluno %d: \n",i);
        printf("Matricula: %u\n",aluno->Matricula);
        printf("Nota: %f\n",aluno->Nota);
    }
    
    //printf("QuickSort para a matricula.\n");
    //quickSort(aluno,0,n-1);


    free(aluno);
    return 0;
}

int partition(Aluno * aluno, int low, int high) {
    // select the rightmost element as pivo
    int pivo = aluno[high].Matricula;
    printf("%u\n",aluno[high].Matricula);
    
    // pointer for greater element
    int i = (low - 1);

    // traverse each element of the aluno
    // compare them with the pivo
    for (int j = low; j < high; j++) {
        if (aluno[j].Matricula <= pivo) {
            
        // if element smaller than pivo is found
        // swap it with the greater element pointed by i
        i++;
        
        // swap element at i with element at j
        printf("MAT1: %u\n",aluno[i].Matricula);
        printf("MAT2: %u\n",aluno[j].Matricula);
        swap(&aluno[i], &aluno[j]);
        }
    }

    // swap the pivo element with the greater element at i
    printf("MAT1: %u\n",aluno[i+1].Matricula);
    printf("MAT2: %u\n",aluno[high].Matricula);
    swap(&aluno[i + 1], &aluno[high]);
    
    // return the partition point
    return (i + 1);
}

void quickSort(Aluno * aluno, int low, int high) {
  if (low < high) {
    
    // find the pivo element such that
    // elements smaller than pivo are on left of pivo
    // elements greater than pivo are on right of pivo
    int pi = partition(aluno, low, high);
    
    // recursive call on the left of pivo
    quickSort(aluno, low, pi - 1);
    
    // recursive call on the right of pivo
    quickSort(aluno, pi + 1, high);
  }
}

void swap(Aluno * a, Aluno * b) {
    Aluno *t;
    printf("A: %p - B: %p\n",a,b);
  
    t = a;
    a = b;
    b = t;
    
    printf("A: %p - B: %p\n",a,b);
    free(t);
}