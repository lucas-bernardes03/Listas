#include <stdio.h>

void read_print(int i, int j);

int main(){
    int i,j;

    do{
        scanf("%d",&i);
    }while(i<1 || i>10);

    do{
        scanf("%d",&j);
    }while(j<1 || j>10);

    read_print(i,j);

    return 0;
}

void read_print(int i, int j){
    int l,c;
    int mat[10][10];

    for(l=0;l<i;l++){
        for(c=0;c<j;c++){
            scanf("%d",&mat[l][c]);
        }
    }

    for(l=0;l<i;l++){
        printf("linha %d: ",l+1);
        for(c=0;c<j;c++){
            printf("%d",mat[l][c]);
            if(c + 1 != j) printf(",");
        }
        printf("\n");
    }
}