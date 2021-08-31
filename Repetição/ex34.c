#include <stdio.h>

int main(){
    int n,nd,i,k,cont;
    nd=0;
    cont = 0;
    
    while(1){
        scanf("%d",&n);
        if(n<=0){
            printf("Fatoracao nao e possivel para o numero %d!\n",n);
        }
        else{
            printf("%d = ",n);
            for(k=2;k>0;k++){
                for(i=1;i<=k;i++){
                if(k%i==0) nd++;
                }
                if(nd==2){
                    while(n%k==0){
                        if(cont==0){
                            n /= k;
                            printf("%d",k);
                            cont++;
                        }
                        else if(cont>=1){
                            n /= k;
                            printf(" x %d",k);
                        }     
                    }
                }
                nd = 0;
                if(n==1) break;
            }
            printf("\n");
            break;
        }
    }
    
    return 0;
}