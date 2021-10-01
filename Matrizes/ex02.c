#include <stdio.h>

int main(){
    int n,i,j;
    int mat[1000][1000];

    scanf("%d",&n);

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
            if(i == j) printf("%d\n",mat[i][j]);    
        } 
    } 
    
    return 0;
}