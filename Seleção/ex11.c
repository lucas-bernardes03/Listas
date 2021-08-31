#include <stdio.h>

int main(){
    
    float a, b, c, temp;
    scanf("%f%f%f", &a,&b,&c);

    if(a>c){
        temp = a;
        a = c;
        c = temp;
    }
        
    if(a>b){
        temp = a;
        a = b;
        b = temp;
    }
        
    if(b>c){
        temp = b;
        b = c;
        c = temp;
    }
        
    printf("%.2f, %.2f, %.2f\n", a, b, c);
    
    return 0;
}