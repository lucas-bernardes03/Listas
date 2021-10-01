#include <stdio.h>

int main(){
    int mat[10][10];
    int m,n,i,j;
    int left,top,right,bottom;
    
    scanf("%d %d",&m,&n);
    if(m > 10 || m < 1 || n > 10 || n < 1){
        printf("Dimensao invalida\n");
        return 0;
    }

    for(i=0;i<m;i++) for(j=0;j<n;j++) scanf("%d",&mat[i][j]); 

    left = 0;
    top = 0;
    right = n-1;
    bottom = m-1;

    while(1){
        for(j=left;j<=right;j++) printf("%d ",mat[top][j]);
        top++;
        if(top == bottom+1) break;
        for(i=top;i<=bottom;i++) printf("%d ",mat[i][right]);
        right--;
        if(right == left-1) break;
        for(j=right;j>=left;j--) printf("%d ",mat[bottom][j]);
        bottom--;
        if(bottom == top-1) break;
        for(i=bottom;i>=top;i--) printf("%d ",mat[i][left]);
        left++;
        if(left == right+1) break;
    }
    printf("\n");

    return 0;
}