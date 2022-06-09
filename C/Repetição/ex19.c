#include <stdio.h>

int main(){
    int n,k,graos;
    scanf("%d",&n);

    graos = 0;
    for(k=1;k<=63;k++){
        if(k%2!=0){
            graos += 2*n;
        }
        else graos += n;
    }
    printf("%d\n",graos);
    return 0;
}