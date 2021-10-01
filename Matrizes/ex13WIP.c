#include <stdio.h>

int main(){
    int vet[200][200];
    int n,bg,i,j;
    int c,l,color,radius,type;

    scanf("%d %d",&n,&bg);
    for(i=0;i<n;i++) for(j=0;j<n;j++) vet[i][j] = bg;

    while(1){
        scanf("%d %d",&c,&l);
        if(c == -1 && l == -1) break;
        scanf("%d %d %d",&color,&radius,&type);
        
        if((l-1)+radius*2 <= n-1 && (c-1)+radius*2 <= n-1){
            for(i=l-1;i<=(l-1)+radius*2;i++){
                for(j=c-1;j<=(c-1)+radius*2;j++){
                    if(type == 2) vet[i][j] = color;
                    else{
                        if(i == l-1 || i == l-1+radius*2 || j == c-1 || j == c-1+radius*2) vet[i][j] = color;
                    }
                }
            }
        }
    }
    printf("P2\n");
    printf("%d %d\n",n,n);
    printf("255\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++) printf("%d ",vet[i][j]);
        printf("\n");
    }
}

