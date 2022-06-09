#include <stdio.h>

int main(){
    int n,div,k,num_div,primo,j,prev;
    scanf("%d",&n);
    div=1;
    num_div=0;
    prev = 0;
    printf("%d = 1 ",n);

    for(k=1;k<n;k++){
        for(j=1;j<=n;j++){
            if(n%j==0) num_div++;
        }
        if(num_div==2) primo = n;
        
        if(k!=1){
            if(n%k==0){
                printf("+ %d ",k);    
                div += k;
            } 
        }
        
        if(div >= n) break;
    }
    
    printf("= %d ",div);

    if(n==div) printf("(NUMERO PERFEITO)\n");
    else printf("(NUMERO NAO E PERFEITO)\n");
    return 0;
}