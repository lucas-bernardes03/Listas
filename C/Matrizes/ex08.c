#include <stdio.h>

int main(){
    int mat[100][100];
    int m,n,b_len,b_val,i,j;
    scanf("%d %d %d %d",&m,&n,&b_len,&b_val);

    printf("P2\n");
    printf("%d %d\n",n,m);
    printf("255\n");

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(i<b_len || i>m-1-b_len || j<b_len || j>n-1-b_len) printf("%d ",b_val);
            else printf("0 ");
        }
        printf("\n");
    }

    return 0;
}