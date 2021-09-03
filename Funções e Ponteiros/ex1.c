#include <stdio.h>

unsigned long int fat(unsigned int n);

int main(){
    unsigned int n;
    scanf("%u", &n);
    printf("%u! = %lu\n",n,fat(n));
    return 0;
}

unsigned long int fat(unsigned int n){
    unsigned long int fat;
    fat = 1;
    while(n>1){
        fat *= n;
        n--;
    }
    return fat;
}
