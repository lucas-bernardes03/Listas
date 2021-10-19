#include <stdio.h>

int main(){
    int m,n;
    int mat[1000][1000];
    int i,j,max,min;

    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++) for(j=0;j<n;j++) scanf("%d",&mat[i][j]);

    max = mat[0][0];
    min = mat[0][0];

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(max > mat[i][j]) max = mat[i][j];
            else if(min < mat[i][j]) min = mat[i][j];
        }
    } 

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(mat[i][j] == max) mat[i][j] = min;
            else if (mat[i][j] == min) mat[i][j] = max;
        }
    }
    
    for(i=0;i<m;i++){
        for(j=0;j<n;j++) printf("%d ",mat[i][j]);
        printf("\n");
    }

    return 0;
}

