#include <stdio.h>

int main(){
    int xad[100][100];
    int m,n,i,j,cont=1;
    scanf("%d %d",&m,&n);

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(i%2==0){
                if(j%2==0) printf("0 ");
                else{
                    printf("%d ",cont);
                    cont++;
                }
            }
            else{
                if(j%2==0){
                    printf("%d ",cont);
                    cont++;
                }
                else printf("0 ");
            }
        }
        printf("\n");
    }
    return 0;
}