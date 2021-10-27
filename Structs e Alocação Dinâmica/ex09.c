#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct{
    int fracao[101];
} Linhas;

void fraction(int n);

int main(){
    int n;
    scanf("%d",&n);
    fraction(n);
    return 0;
}

void fraction(int n){
    char tmp[200],len;
    int i,k,id=0,j;
    int dig,nd=0,ne=0;
    double res;

    Linhas * linha;
    linha = (Linhas*)malloc(n*sizeof(Linhas));

    for(i=0;i<n;i++){
        scanf("%*c%[^\n]",tmp);
        len = strlen(tmp);
        for(k=0;k<len;k++){
            if(tmp[k] >= '0' && tmp[k] <='9'){
                if(tmp[k+1] == '/' || tmp[k+1] == ' ' || tmp[k+1] == '\n' || tmp[k+1] == '\0'){
                    linha[i].fracao[id] = (int)tmp[k] - 48;
                    id++;
                }
                else{
                    linha[i].fracao[id] = atoi(&tmp[k]);
                    id++;
                    dig = atoi(&tmp[k]);
                    while(dig != 0){
                        dig /= 10;
                        nd++;
                    }
                    k += nd;
                    nd=0;
                }
            }
        }
        linha[i].fracao[100] = id;
        id=0;
    }
    
    for(i=0;i<n;i++){
        printf("Caso de teste %d\n",i+1);
        for(k=0;k<linha[i].fracao[100];k+=2){
            res = linha[i].fracao[k]/(double)linha[i].fracao[k+1];
            for(j = k+2;j<linha[i].fracao[100];j+=2){
                if(res == linha[i].fracao[j]/(double)linha[i].fracao[j+1]){
                    printf("%d/%d equivalente a %d/%d\n",linha[i].fracao[k],linha[i].fracao[k+1],linha[i].fracao[j],linha[i].fracao[j+1]);
                    ne = 1;
                }
            }
        }
        if(ne == 0) printf("Nao ha fracoes equivalentes na sequencia\n");
        ne=0;
    }

    free(linha);
}