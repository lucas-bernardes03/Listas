#include <stdio.h>

int main(){
    
    int a,b,c,d,maior,sum;
    scanf("%d%d%d%d",&a,&b,&c,&d);

    maior = a;
    if (b>maior){
        maior = b;
    }
    if(c>maior){
        maior = c;
    }
    if(d>maior){
        maior = d;
    }

    sum = (a+b+c+d) - maior;
    printf("%d\n", sum);

    return 0;
}