#include <stdio.h>

#define I 2
#define J 2

int main(){
    double mat[I][J];
    double det;
    int i,j;

    for(i=0;i<I;i++) for(j=0;j<J;j++) scanf("%lf",&mat[i][j]);

    det = mat[0][0] * mat[1][1] - mat[0][1] * mat[1][0];
    printf("%.2lf\n",det);
    return 0;
}