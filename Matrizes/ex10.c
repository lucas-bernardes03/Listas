#include <stdio.h>

int main(){
    int mat[1000][1000],tmat[1000][1000];
    int n,i,j,tr=0;
    scanf("%d",&n);

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
            if(i == j) tr += mat[i][j];
        } 
    } 

    for(i=0;i<n;i++) for(j=0;j<n;j++) tmat[i][j] = mat[j][i];

    for(i=0;i<n;i++) for(j=0;j<n;j++) mat[i][j] = mat[i][j] * tr;
        
    for(i=0;i<n;i++) for(j=0;j<n;j++) mat[i][j] = mat[i][j] + tmat[i][j];

    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) printf("%d ",mat[i][j]);
        printf("\n");
    }
    return 0;
}
