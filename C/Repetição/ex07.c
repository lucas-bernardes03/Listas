#include <stdio.h>

int main(){
    double prova, mp, lista ,ml, nt,nf,pres, pres_min;
    int mat,k;
    while(1){     
        scanf("%d",&mat); 
        if(mat==-1) break;
        mp=0;
        ml=0; 
        for(k=0;k<8;k++){
            scanf("%lf",&prova);
            mp += prova;
        }

        for(k=0;k<5;k++){
            scanf("%lf",&lista);
            ml += lista;
        }

        scanf("%lf",&nt);
        scanf("%lf",&pres);
        nf = (mp/8 * .7 + ml/5 * .15 + nt * .15);
        printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: ",mat,nf);

        pres_min = 128*.75;

        if(nf>=6 && pres>=pres_min) printf("APROVADO\n");
        else if(nf>=6 && pres<pres_min) printf("REPROVADO POR FREQUENCIA\n");
        else if(nf<6 && pres>=pres_min) printf("REPROVADO POR NOTA\n");
        else printf("REPROVADO POR NOTA E POR FREQUENCIA\n");
    }
    return 0;
}