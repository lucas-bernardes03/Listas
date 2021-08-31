#include <stdio.h>

int main(){

    int mat;
    float h,vh, sal;

    while(1){
        scanf("%d %f %f",&mat,&h,&vh);
        if(mat==0) break;
        sal = h*vh;
        printf("%d %.2f\n",mat,sal);
    }

    return 0;
}