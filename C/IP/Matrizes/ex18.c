#include <stdio.h>

int main(){
    int mat[1000][1000];
    int n,i,j,k,tmp,swap;
    scanf("%d",&n);

    for(i=0;i<n;i++) for(j=0;j<n;j++) scanf("%d",&mat[i][j]);

    for(j=0;j<n;j++){
        for(i=0;i<n;i++){
            swap = 0;
            for(k=0;k<n-1;k++){
                if(mat[k][j] > mat[k+1][j]){
                    tmp = mat[k][j];
                    mat[k][j] = mat[k+1][j];
                    mat[k+1][j] = tmp;
                    swap = 1;
                }
            }
            if(swap == 0) break;
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++) printf("%d ",mat[i][j]);
        printf("\n");
    } 

    return 0;
}