#include <stdio.h>

int main(){
    
    float sal, sal_min;
    int np, te, et;
    scanf("%f%d%d%d",&sal,&np,&te,&et);

    sal_min = 937.00;
    
    if(te==2 && sal/np<=sal_min*1.5){
        if(et<=3 && et>=1){
            printf("ALUNO COTISTA (L2)\n");
            return 0;
        }
        printf("ALUNO COTISTA (L1)\n");
        return 0;
    }
    else if(te == 2 && sal/np>sal_min*1.5){
        if (et<=3 && et>=1){
            printf("ALUNO COTISTA (L4)\n");
            return 0;
        }
        printf("ALUNO COTISTA (L3)\n");
    }
    else
        printf("ALUNO NAO COTISTA\n");
    return 0;
}