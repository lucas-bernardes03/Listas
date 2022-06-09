#include <stdio.h>

int main(){
    int n,i,j,l,c;
    int mat[1000][1000];

    scanf("%d",&n);
    l=0;
    c=n-1;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
            if(i==l && j==c){
                printf("%d\n",mat[i][j]);
                l++;
                c--;
            }
        } 
    } 
    
    
    return 0;
}