#include <stdio.h>
#include <math.h>
int aliteracao(char * frase);

int main(){
    int a, ali;
    char frase[5000];
    while(1){
        a = scanf("%[^\n]%*c",frase);
        if(a == EOF) break;
        ali = aliteracao(frase);
        printf("%d\n",ali);
    }
    return 0;
}

int aliteracao(char * frase){
    int i=0,ali=0,k=0;
    char hl;
    hl = frase[0];
    while(frase[i] != '\0'){
        if(frase[i] == ' '){
            if(fabs((int)frase[i+1] - (int)hl == 32) || (int)frase[i+1] - (int)hl == 0){
                if(k==0){
                    ali++;
                    k++;
                }
                else k++;
            }
            else k=0;
            hl = frase[i+1];
        }
        i++;
    }
    return ali;
}

