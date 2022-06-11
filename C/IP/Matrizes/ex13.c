#include <stdio.h>

int main(){
    int mat[201][201];
    int n,bg,i,j;
    int c,l,color,radius,type;

    scanf("%d %d",&n,&bg);
    for(i=0;i<n;i++) for(j=0;j<n;j++) mat[i][j] = bg;

    while(1){
        scanf("%d %d",&c,&l);
        if(c == -1 && l == -1) break;
        scanf("%d %d %d",&color,&radius,&type);
        
        if(c+radius >= n || c-radius < 0 || l+radius >= n || l-radius < 0) continue;
          
        else{
            if(type == 1){
                for(i=l-radius;i<=l+radius;i++){
                    for(j=c-radius;j<=c+radius;j++){
                        if(i==l-radius || i==l+radius || j==c-radius || j==c+radius){
                            mat[i][j] = color;
                        }
                    }
                }
            }
            else if(type == 2){
                for(i=l-radius;i<=l+radius;i++) for(j=c-radius;j<=c+radius;j++) mat[i][j] = color;
            }
        }
    }

    printf("P2\n");
    printf("%d %d\n",n,n);
    printf("255\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++) printf("%d ",mat[i][j]);
        printf("\n");
    }
    return 0;
}

