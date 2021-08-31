#include <stdio.h>

int main(){

    float a, b ,c, media;
    
    scanf("%f%f%f", &a, &b, &c);

    media = (a+b+c)/3;

    if (media>=6){
        printf("MEDIA = %.2f\nAPROVADO\n", media);
    } else
        printf("MEDIA = %.2f\nREPROVADO\n", media);

    return 0;
}