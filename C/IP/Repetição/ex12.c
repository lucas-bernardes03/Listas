#include <stdio.h>

int main(){
    int n, num, i, prev, k, max;
    scanf("%d", &n);

    max = 1;
    k = 1;

    for(i=0;i<n;i++){
        scanf("%d",&num);
        if(num==prev){
            k++;
            if(k>max){
                max = k;
            }
        }
        else k = 1;
        prev = num;
    }
    printf("O comprimento do segmento de numeros iguais e: %d\n",max);
    return 0;
}