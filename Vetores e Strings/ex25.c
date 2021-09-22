#include <stdio.h>
#include <math.h>

void letter_freq(char * frase);

int main(){
    char frase[200];
    int i,nt;
    scanf("%d",&nt);
    for(i=0;i<nt;i++){
        scanf("%*c%[^\n]",frase);
        letter_freq(frase);
    }
    letter_freq(frase);

    return 0;
}

void letter_freq(char * frase){
    int i=0,k,j,cont=1,maior=-1;
    int index[200];
    while(frase[i] != '\0'){                
        i++;
    }
    for(k=0;k<i;k++){
        for(j=k+1;j<i;j++){
            if(fabs((int)frase[k] - (int)frase[j]) == 32 || (int)frase[k] - (int)frase[j] == 0){
                cont++;
            }
        }
        index[k] = cont; // retirar os espaços
        cont=1;
    }

}