#include <stdio.h>

void swap(int m, int n);

int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    swap(m,n);
    return 0;
}

void swap(int m, int n){
    int mat[1000][1000];
    int i,j,maior,menor;
    int index[4];

    for(i=0;i<m;i++) for(j=0;j<n;j++) scanf("%d",&mat[i][j]);

    maior = mat[0][0];
    menor = mat[0][0];

    for(i=0;i<m;i++) {
        for(j=0;j<n;j++){
           if(mat[i][j] > maior){
                maior = mat[i][j];
                index[0] = i;
                index[1] = j;
           } 
           if(mat[i][j] < menor){
                menor = mat[i][j]; 
                index[2] = i;
                index[3] = j;
           } 
        }
    }

    mat[index[2]][index[3]] = maior;
    mat[index[0]][index[1]] = menor;

    for(i=0;i<m;i++){
        for(j=0;j<n;j++) printf("%d ",mat[i][j]);
        printf("\n");
    } 
}