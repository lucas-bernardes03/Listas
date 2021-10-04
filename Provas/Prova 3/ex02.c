#include <stdio.h>

int main(){
    int mat[10][10];
    int n,i,j;

    scanf("%d",&n);
    if(n < 1 || n > 10){
        printf("dimensao invalida\n");
        return 0;
    }

    for(i=0;i<n;i++) for(j=0;j<n;j++) scanf("%d",&mat[i][j]);

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(mat[i][j] != mat[j][i]){
                printf("nao bissimetrica\n");
                return 0;
            }
        }
    }

    for(i=0;i<n;i++){
        for(j=n-1;j>=0;j--){
            if(mat[i][j] != mat[n-1-j][n-1-i]){
                printf("nao bissimetrica\n");
                return 0;
            }
        }
    }

    printf("bissimetrica\n");

    return 0;
}