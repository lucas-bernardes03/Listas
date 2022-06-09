#include <stdio.h>

void somaDivisores(int n, int*div);

int main(){
    int n,div;
    scanf("%d",&n);
    
    printf("%d = 1 ",n);
    somaDivisores(n, &div);
    printf("= %d ",div);
    
    if(n==div) printf("(NUMERO PERFEITO)\n");
    else printf("(NUMERO NAO E PERFEITO)\n");
    
    return 0;
}

void somaDivisores(int n, int*div){
    int k,j,sum;
    sum = 1;
    for(k=1;k<n;k++){   
        if(k!=1){
            if(n%k==0){
                printf("+ %d ",k);    
                sum += k;
            } 
        }
    }
    *div = sum;
}