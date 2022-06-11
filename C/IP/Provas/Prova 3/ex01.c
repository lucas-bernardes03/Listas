#include <stdio.h>

void le_conjunto(int * vect, int n);

int main(){
    int vect[100];
    int n;
    
    scanf("%d",&n);
    if(n < 1 || n > 100) return 0;

    le_conjunto(vect,n);
    return 0;
}

void le_conjunto(int * vect, int n){
    int i=0,k,j,num,ver=0;

    while(i != n){
        scanf("%d",&num);
        for(k=0;k<n;k++){
            if(vect[k] == num){
                ver = 1;
                break;
            }
        }
        
        if(ver == 0){
            vect[i] = num;
            i++;
        }  
        ver = 0;
    }
    printf("(");
    for(i=0;i<n;i++){
        printf("%d",vect[i]);
        if(i+1 != n) printf(",");
    } 
    printf(")\n");
}