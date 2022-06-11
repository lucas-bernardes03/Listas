#include <stdio.h>

int main(){
    int mat[6][6];
    int i,j,amp,amp_max=-64;
    for(i=0;i<6;i++) for(j=0;j<6;j++) scanf("%d",&mat[i][j]);

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            amp = mat[i][j]+mat[i][j+1]+mat[i][j+2]+mat[i+1][j+1]+mat[i+2][j]+mat[i+2][j+1]+mat[i+2][j+2];
            if(amp > amp_max) amp_max = amp;
        }
    }
    printf("%d\n",amp_max);

    return 0;
}