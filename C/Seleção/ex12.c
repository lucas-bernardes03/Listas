#include <stdio.h>
#include <math.h>

int main(){
    
    float a, b, c, delta, x1, x2, temp;
    scanf("%f%f%f", &a,&b,&c);

    delta = b*b - 4*a*c;

    if(delta>0){
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
        if(x1>x2){
            temp = x1;
            x1 = x2;
            x2 = temp;
            
        }
        printf("RAIZES DISTINTAS\nX1 = %.2f\nX2 = %.2f\n", x1, x2);
    }
    
    else if(delta==0){
        x1 = (-b)/(2*a);
        printf("RAIZ UNICA\nX1 = %.2f\n", x1);
    }
    else{
        printf("RAIZES IMAGINARIAS\n");
    }
    
    return 0;
}