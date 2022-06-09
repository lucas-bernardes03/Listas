#include <stdio.h>

int main(){
    int mat[500][500];
    int m,n,i,j;
    int top,bottom,left,right;
    scanf("%d %d",&m,&n);

    for(i=0;i<m;i++) for(j=0;j<n;j++) scanf("%d",&mat[i][j]);

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(mat[i][j] == 1111){
                top = i-1;
                bottom = i+1;
                left = j-1;
                right = j+1;
                if(top < 0) top = m-1;
                if(bottom == m) bottom = 0;
                if(left < 0) left = n-1;
                if(right == n) right = 0;
                if(mat[top][j] == 4 && mat[bottom][j] == 8 && mat[i][left] == 0 && mat[i][right] == 0){
                    printf("%d %d\n",i,j);
                    return 0;
                } 
            }
        }
    }
    printf("WALLY NAO ESTA NA MATRIZ\n");
    return 0;
}