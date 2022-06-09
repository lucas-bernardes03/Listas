#include <stdio.h>

#define MAX 100

int main(){
    int mat[MAX][MAX];
    int i,j,l,c,casa=1;
    scanf("%d %d",&i,&j);

    for(l=0;l<i;l++){
        for(c=0;c<j;c++){
            if(l%2==0){
                if(c%2==0) printf("1");
                else printf("0");
            }
            else{
                if(c%2==0) printf("0");
                else printf("1");
            }
        }
        printf("\n");
    }
    return 0;
}