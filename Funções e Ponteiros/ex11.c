#include <stdio.h>

void converteEmNotasMoedas(int n, int*n100,int*n50,int*n10,int*m1);

int main(){
    int n;
    int n100,n50,n10,m1;
    scanf("%d",&n);
    converteEmNotasMoedas(n,&n100,&n50,&n10,&m1);
    
    printf("NOTAS DE 100 = %d\n",n100);
    printf("NOTAS DE 50 = %d\n",n50);
    printf("NOTAS DE 10 = %d\n",n10);
    printf("MOEDAS DE 1 = %d\n",m1);

    return 0;
}

void converteEmNotasMoedas(int n, int*n100,int*n50,int*n10,int*m1){
    int cem,cin,dez,um;
    cem = 0;
    cin = 0;
    dez = 0;
    um = 0;
    while(n>=100){
        cem++;
        n -= 100;
    }
    while(n>=50){
        cin++;
        n -= 50;
    }
    while(n>=10){
        dez++;
        n -= 10;
    }
    while(n>=1){
        um++;
        n -= 1;
    }
    *n100 = cem;
    *n50 = cin;
    *n10 = dez;
    *m1 = um;
}