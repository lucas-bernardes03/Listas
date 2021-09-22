#include <stdio.h>

int cpf_validation(int * cpf);

int main(){
    int val,nt,i,cpf[11];
    scanf("%d",&nt);
    while(nt > 0){
        for(i=0;i<11;i++){
            scanf("%d",&cpf[i]);
        }
        val = cpf_validation(cpf);
        if(val == 1) printf("CPF valido\n");
        else printf("CPF invalido\n");
        nt--;
    }    

    return 0;
}

int cpf_validation(int * cpf){
    int i,k=1,sum=0;
    int b1,b2;
    for(i=0;i<9;i++){
        sum += cpf[i] * (k+i); 
    }
    b1 = (sum % 11) % 10;
    
    sum = 0;
    k = 9;
    
    for(i=0;i<9;i++){
        sum += cpf[i] * (k-i);
    }
    b2 = (sum % 11) % 10;

    if(b1 == cpf[9] && b2 == cpf[10]) return 1;
    else return 0;
}