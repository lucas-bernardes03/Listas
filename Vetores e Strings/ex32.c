#include <stdio.h>

int main(){
    int result[6], apostas[300000];
    int i,n,k,na=0;
    int sena=0, quina=0, quadra=0;
    
    for(i=0;i<6;i++){
        scanf("%d",&result[i]);
    }

    scanf("%d",&n);

    for(i=0;i<n*6;i++){
        scanf("%d", &apostas[i]);
    }

    for(i=0;i<n*6;i+=6){
        if(i+6 > n*6) break;
        for(k=0;k<6;k++){
            if(result[k] == apostas[i]) na++;
            else if(result[k] == apostas[i+1]) na++;
            else if(result[k] == apostas[i+2]) na++;
            else if(result[k] == apostas[i+3]) na++;
            else if(result[k] == apostas[i+4]) na++;
            else if(result[k] == apostas[i+5]) na++;
        }
        if(na == 6) sena++;
        if(na == 5) quina++;
        if(na == 4) quadra++;
        na = 0;
    }

    if(sena == 0) printf("Nao houve acertador para sena\n");
    else printf("Houve %d acertador(es) da sena\n",sena);

    if(quina == 0) printf("Nao houve acertador para quina\n");
    else printf("Houve %d acertador(es) da quina\n",quina);

    if(quadra == 0) printf("Nao houve acertador para quadra\n");
    else printf("Houve %d acertador(es) da quadra\n",quadra);

    return 0;
}