#include <stdio.h>
#include <stdlib.h>

int ** cria_matriz(int n);
int ePermutacao (int ** mat, int n, int * soma);
void destroi_matriz(int ** mat);

int main(){
    int n;
    int soma=0,op;
    int ** mat;
    scanf("%d",&n);
    
    mat = cria_matriz(n);
    op = ePermutacao(mat,n,&soma);
    destroi_matriz(mat);

    printf("%d\n",n);
    if(op == 1) printf("PERMUTACAO\n");
    else printf("NAO E PERMUTACAO\n");
    printf("%d",soma);
    return 0;
}

int ** cria_matriz(int n){
    int i,j;
    int ** mat, *ptr;
    
    mat = (int **)malloc(n*n*sizeof(int) + n * sizeof(int*));
    ptr = (int*)(mat + n);

    for(i=0;i<n;i++) mat[i] = (ptr + n*i);
    for(i=0;i<n;i++) for(j=0;j<n;j++) scanf("%d",&mat[i][j]);
    
    return mat;
}

int ePermutacao (int ** mat, int n, int * soma){
    int i,j;
    int nnn = 0;
    for(i=0;i<n;i++) for(j=0;j<n;j++) *soma += mat[i][j];
    
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(mat[i][j] == 1) nnn++;
            else if(mat[i][j] != 0) return 0;
        }
        if(nnn == 0) return 0;
        else if(nnn > 1) return 0;
        nnn = 0;
    }

    for(j=0;j<n;j++){
        for(i=0;i<n;i++){
            if(mat[i][j] == 1) nnn++;
            else if(mat[i][j] != 0) return 0;
        }
        if(nnn == 0) return 0;
        else if(nnn > 1) return 0;
        nnn = 0;
    }  

    return 1;
}

void destroi_matriz(int ** mat){
    free(mat);
}