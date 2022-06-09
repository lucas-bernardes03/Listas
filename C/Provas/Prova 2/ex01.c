#include <stdio.h>

int main (){
    int n,i,k,pos;
    scanf("%d",&n);
    pos =0;
    for(k=1;k<=6;k++){
        for(i=1;i<=6;i++){
            if(i!=k){
                if(i+k==n){
                    printf("D1: %d, D2: %d\n",k,i);
                    pos++;
                }
            }
        }
    }
    if(pos==0) printf("Combinacao impossivel\n");
    else printf("Ha %d possibilidades\n",pos);

    return 0;
}
