#include <stdio.h>

int main (){
    float mat[2][2],res[2][2];
    int i,j,k;
    
    for(i=0;i<2;i++) for(j=0;j<2;j++) scanf("%f",&mat[i][j]);

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            res[i][j] = 0;
            for(k=0;k<2;k++){
                res[i][j] += mat[i][k]*mat[k][j];
            }
            printf("%.3f ",res[i][j]);
        }
        printf("\n");
    }

    return 0;
}

