#include <stdio.h>

void inverte(int a, int b, int*n);

int main(){
    int t,i;
    int a, b, n;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d %d",&a,&b);
        inverte(a,b,&n);
        printf("%d\n",n);
    }
    return 0;
}  

void inverte(int a, int b, int*n){
    int Ca, Da, Ua;
    int Cb, Db, Ub;
    int inva, invb;
    Ca = a/100;
    Da = (a/10)%10;
    Ua = a%10;
    Cb = b/100;
    Db = (b/10)%10;
    Ub = b%10;
    inva = Ua*100 + Da*10 + Ca;
    invb = Ub*100 + Db*10 + Cb;
    if(inva>invb) *n = inva;
    else *n = invb;
}