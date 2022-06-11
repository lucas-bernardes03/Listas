#include <stdio.h>

int main(){
    int inv1,inv2;
    int n1,n2;    
    int t,k;
    scanf("%d",&t);

    for(k=0;k<t;k++){
        scanf("%d %d",&n1,&n2);
        inv1 = (n1/100) + ((n1/10)%10)*10 + (n1%10)*100;
        inv2 = (n2/100) + ((n2/10)%10)*10 + (n2%10)*100;
        if(inv1>inv2) printf("%d\n",inv1);
        else printf("%d\n",inv2);
    }
    return 0;
}