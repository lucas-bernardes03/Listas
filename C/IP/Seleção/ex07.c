#include <stdio.h>

int main(){

    float sal, rea;
    scanf("%f", &sal);

    if(sal<=300){
        rea = sal*1.5;
        printf("SALARIO COM REAJUSTE = %.2f\n", rea);
    }
    else{
        rea = sal*1.3;
        printf("SALARIO COM REAJUSTE = %.2f\n", rea);
    }

    return 0;
}