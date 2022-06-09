#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int mat;
    int dd;
    int mm;
    int aaaa;
    char nome[200];
} Alunos;

int ComparaDataNasc(Alunos a1, Alunos a2);
void LerDatas(int n);

int main(){
    int n;
    scanf("%d",&n);
    LerDatas(n);
    return 0;
}

void LerDatas(int n){
    int i,k,maior=-1,idx;
    int * ord;
    ord = (int*)malloc(n*sizeof(int));
    Alunos * aluno;
    aluno = (Alunos*)malloc(n*sizeof(Alunos));
    
    for(i=0;i<n;i++) ord[i] = 0;

    for(i=0;i<n;i++){
        scanf("%d",&(aluno[i].mat));
        scanf("%d",&(aluno[i].dd));
        scanf("%d",&(aluno[i].mm));
        scanf("%d%*c",&(aluno[i].aaaa));
        scanf("%[^\n]",(aluno[i].nome));
    }

    for(i=0;i<n;i++){
        for(k=0;k<n;k++){
            if(k != i) ord[i] += ComparaDataNasc(aluno[i],aluno[k]);
        }
    }

    for(i=0;i<n;i++){
        for(k=0;k<n;k++){
            if(ord[k] > maior){
                maior = ord[k];
                idx = k;
            } 
        }
        printf("Matric.: %d ",aluno[idx].mat);
        printf("Nome: %s ",aluno[idx].nome);
        printf("Data Nasc: %d/%d/%d\n",aluno[idx].dd,aluno[idx].mm,aluno[idx].aaaa);
        ord[idx] = -1;
        maior = -1;
    }

    free(ord);
    free(aluno);
}

int ComparaDataNasc(Alunos a1, Alunos a2){
    if(a1.aaaa > a2.aaaa) return 1;
    else if(a1.aaaa == a2.aaaa){
        if(a1.mm > a2.mm) return 1;
        else if(a1.mm == a2.mm){
            if(a1.dd > a2.dd) return 1;
            else return 0;
        }
        else return 0;
    }
    else return 0;
}