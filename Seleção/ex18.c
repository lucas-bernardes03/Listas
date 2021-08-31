#include <stdio.h>

int main(){
    
    int n1, n2, n3, temp;
    char x, y, z;
    scanf("%d %d %d\n",&n1,&n2,&n3);
    scanf("%c%c%c",&x,&y,&z);

    if(n1>n2){
        temp = n1;
        n1 = n2;
        n2 = temp;
    }
    if(n1>n3){
        temp = n1;
        n1 = n3;
        n3 = temp;
    }
    if(n2>n3){
        temp = n2;
        n2 = n3;
        n3 = temp;
    }
    
    if(x == 'C'){
        if(y == 'B'){
            printf("%d %d %d\n", n3, n2, n1);
        }else{
            printf("%d %d %d\n", n3, n1, n2);
        }
    }
    else if(x == 'B'){
        if(y == 'C'){
            printf("%d %d %d\n", n2, n3, n1);
        }else{
            printf("%d %d %d\n", n2, n1, n3);
        }
    }
    else{
        if(y == 'B'){
            printf("%d %d %d\n", n1,n2,n3);
        }else{
            printf("%d %d %d\n", n1, n3, n2);
        }
    }
    return 0;
}