#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int matricula;
    int idade;
    int nfilhos;
    char sexo;
    double salario;
} Funcionarios;

int main(){
    int q1=0,q2=0,q3=0,q4=0;
    int i,n,si=0,sf=0;
    double mf,mi;
    
    scanf("%d",&n);
    
    Funcionarios * fc;
    fc = (Funcionarios * )malloc(n*sizeof(Funcionarios));

    for(i=0;i<n;i++){
        scanf("%d",&(fc[i].matricula));
        scanf("%d",&(fc[i].idade));
        scanf("%d%*c",&(fc[i].nfilhos));
        scanf("%c",&(fc[i].sexo));
        scanf("%lf",&(fc[i].salario));
        
        si += fc[i].idade;
        sf += fc[i].nfilhos;
    } 
    
    mi = si/(double)n;
    mf = sf/(double)n;
    
    for(i=0;i<n;i++){
        if(fc[i].idade > mi && fc[i].salario > 3600) q1++;
        if(fc[i].sexo == 'F' && fc[i].nfilhos > mf) q2++;
        else if(fc[i].sexo == 'M' && fc[i].nfilhos > mf) q3++;
        if(fc[i].idade > 47 && fc[i].salario/((double)fc[i].nfilhos + 1) < 2400) q4++;
    }
    
    printf("%d %d %d %d",q1,q2,q3,q4);

    free(fc);
    return 0;
}