#include <stdio.h>

int main(){
    int n,i,j,cam;
    int mat[101][101];

    scanf("%d",&n);
    for(i=0;i<=n;i++) for(j=0;j<=n;j++) scanf("%d",&mat[i][j]);

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cam = 0;
            if(mat[i][j] == 1) cam++;
            if(mat[i][j+1] == 1) cam++;
            if(mat[i+1][j] == 1) cam++; 
            if(mat[i+1][j+1] == 1) cam++;
            if(cam >= 2) printf("S");
            else printf("U");
        }
        printf("\n");
    }

    return 0;
}