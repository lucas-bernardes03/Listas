#include <stdio.h>

int main(){
    int n,i,num,prev,k,max;
    scanf("%d",&n);
    max = 0;
    k = 0;
    prev = 0;
    
    for(i=0;i<n;i++){
        scanf("%d", &num);
            if(num>prev){
                k++;
                if(k>max){
                    max = k;
                } 
            }
            else k = 1;
        prev = num;
    }
    printf("O comprimento do segmento crescente maximo e: %d\n",max);
    
    return 0;
}