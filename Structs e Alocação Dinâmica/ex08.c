#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int code;
    float credit_value;
    char name[100];
} Cursos;

typedef struct{
    char name[500];
    int code;
    int credit;
} Alunos;

void university(int n);

int main(){
    int n;
    scanf("%d",&n);
    university(n);
    return 0;
}

void university(int n){
    int i,k,n_alunos,c;
    float msld;
    Cursos * curso;
    curso = (Cursos *)malloc(n * sizeof(Cursos));
    
    //cursos
    for(i=0;i<n;i++){
        scanf("%d",&(curso[i].code));
        scanf("%f%*c",&(curso[i].credit_value));
        scanf("%[^\n]",(curso[i].name));
    }

    scanf("%d%*c",&n_alunos);
    
    Alunos * aluno;
    aluno = malloc(n_alunos * sizeof(Alunos));

    //estudantes
    for(i=0;i<n_alunos;i++){
        scanf("%[^\n]",(aluno[i].name));
        scanf("%d",&(aluno[i].code));
        scanf("%d%*c",&(aluno[i].credit));
    }
    
    //impressao
    for(i=0;i<n_alunos;i++){
        printf("Aluno(a): %s ",aluno[i].name);
        for(k=0;k<n;k++) if(curso[k].code == aluno[i].code){
            printf("Curso: %s ",curso[k].name);
            printf("Num. Creditos: %d ", aluno[i].credit);
            printf("Valor Credito: %.2f ", curso[k].credit_value);
            printf("Mensalidade: %.2f\n",(aluno[i].credit * curso[k].credit_value));
        } 
    }
    free(curso);
    free(aluno);
}