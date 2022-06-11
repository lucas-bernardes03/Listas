#include <stdio.h>

int main(){
    
    int m,nd;
    float sm,sf,ti,ib,num_sal,il,in;
    scanf("%d%f%d%f%f", &m,&sm,&nd,&sf,&ti);

    num_sal = sf / sm;
    
    if(num_sal>12){
        ib = sf*.2;
    }
    else if(num_sal<=12 && num_sal>5){
        ib = sf*.08;
    }
    else{
        ib = 0;
    }
    
    il = ib - (300*nd);
    in = sf*ti/100;

    printf("MATRICULA = %d\n", m);
    printf("IMPOSTO BRUTO = %.2f\n", ib);
    printf("IMPOSTO LIQUIDO = %.2f\n", il);
    printf("RESULTADO = %.2f\n", il - in);

    if(il-in>0){
        printf("IMPOSTO A PAGAR\n");
    }
    else if (il-in==0){
        printf("IMPOSTO QUITADO\n");
    }
    else{
        printf("IMPOSTO A RECEBER\n");
    }

    return 0;
}