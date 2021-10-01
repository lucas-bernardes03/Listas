#include <stdio.h>

int main(){
    int bets[50000][6],result[1][6];
    int quadra=0,quina=0,sena=0;
    int n,i,j,na=0,k;
    scanf("%d",&n);

    for(i=0;i<n;i++) for(j=0;j<6;j++) scanf("%d ",&bets[i][j]);
    for(j=0;j<6;j++) scanf("%d",&result[0][j]);

    for(i=0;i<n;i++){
        for(j=0;j<6;j++){
            for(k=0;k<6;k++){
                if(bets[i][j] == result[0][k]) na++;
            }
        }
        if(na == 4) quadra++;
        else if(na == 5) quina++;
        else if(na == 6) sena++;
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