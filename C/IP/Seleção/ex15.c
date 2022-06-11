#include <stdio.h>
#define CC 7
#define DR 50
#define RT 80000

int main(){
    
    int cc, dr, rt, grau;
    scanf("%d%d%d", &cc,&dr,&rt);

    grau = 10;

    if(rt>RT && dr>DR && cc<CC){
        grau;
    }
    else if(rt<=RT && dr>DR && cc<CC){
        grau -= 1;
    }
    else if(rt<=RT && dr<=DR && cc<CC){
        grau -= 2;
    } 
    else if(rt<=RT && dr<=DR && cc>=CC){
        grau -= 3;
    }
    else    
        grau -= 3;
    
    printf("ACO DE GRAU = %d\n", grau);
    
    return 0;
}