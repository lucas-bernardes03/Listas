#include <stdio.h>

int main(){
    int vet[1000][1000];
    int n,m,i,j;
    int menor = 1001, maior = -1;
    double min_c=0,max_c=0;
    double percent; 
    scanf("%d %d",&n,&m);

    for(i=0;i<n;i++) for(j=0;j<m;j++) scanf("%d",&vet[i][j]);

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(vet[i][j] < menor) menor = vet[i][j];
            if(vet[i][j] > maior) maior = vet[i][j];
        } 
    }

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(vet[i][j] == menor) min_c++;
            if(vet[i][j] == maior) max_c++;
        } 
    }
    
    percent = 100/(double)((n*m)/min_c);
    printf("%d %.2lf%%\n",menor,percent);
    percent = 100/(double)((m*n)/max_c);
    printf("%d %.2lf%%\n",maior,percent);

    return 0;
}