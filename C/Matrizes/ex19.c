#include <stdio.h>

int main(){
    int n,p,np;
    int i,j,k;
    double mat[10][10], res[10][10],mid[10][10];
    scanf("%d",&n);
    scanf("%d",&p);

    for(i=0;i<n;i++) {
        for(j=0;j<n;j++){
            scanf("%lf",&mat[i][j]);
            mid[i][j] = mat[i][j];
            res[i][j] = 0;
        }
    } 

    for(np=1;np<p;np++){
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                res[i][j] = 0;
                for(k=0;k<n;k++){
                    res[i][j] += mid[i][k]*mat[k][j];
                }          
            }
        }
        for(i=0;i<n;i++) for(j=0;j<n;j++) mid[i][j] = res[i][j];
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%.3lf ",res[i][j]);
        } 
        printf("\n");
    } 
    return 0;
}