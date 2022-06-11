#include <stdio.h>
#include <math.h>

int main(){
    int n, i;
    double pontos[3000], DP, maior=-1;
    
    scanf("%d",&n);

    for(i=0;i<n*3;i++){
        scanf("%lf", &pontos[i]);        
    }

    for(i=0;i<n*3;i+=3){
        if(i+3 == n*3) break;
        DP = fabs(pontos[i] - pontos[i+3]);
        if(DP >= maior) maior = DP;
        
        DP = fabs(pontos[i+1] - pontos[i+4]);
        if(DP >= maior) maior = DP;
        
        DP = fabs(pontos[i+2] - pontos[i+5]);
        if(DP >= maior) maior = DP;

        printf("%.2lf\n",maior);
        maior = -1;
    }
    

    return 0;
}