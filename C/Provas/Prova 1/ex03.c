#include <stdio.h>
 
int main(){
    
    int ns,uf,dv,bc1d,bc2d,d1,d2,d3,d4,d5,d6,d7,d8,ufd1,ufd2,ufd3;
    scanf("%d %d",&ns,&uf);
 
    d1 = (ns/10000000) * 2;
    d2 = ((ns/1000000) %10) * 3;
    d3 = ((ns/100000) %10) * 4;
    d4 = ((ns/10000)%10) * 5;
    d5 = ((ns/1000)%10) * 6;
    d6 = ((ns/100)%10) * 7;
    d7 = ((ns/10)%10) * 8;
    d8 = (ns % 10) * 9;
    
    bc1d = (d1+d2+d3+d4+d5+d6+d7+d8) % 11; //resto
    
    ufd1 = (uf/10) * 7;
    ufd2 = (uf%10) * 8;    
    ufd3 = (bc1d%10) * 9;
 
    bc2d = (ufd1+ufd2+ufd3) % 11; //2digito
 
    if(uf>28 || uf<=0){
        printf("CODIGO DA UF INVALIDO!\n");
        return 0;
    }
  
    if(bc1d != 10 && uf<10){
        printf("%d0%d/%d%d\n",ns,uf,bc1d,bc2d);
    }else if (bc1d != 10){
        printf("%d%d/%d%d\n",ns,uf,bc1d,bc2d);
    }else if (bc1d == 10 && uf<10){
        printf("%d0%d/0%d\n",ns,uf,bc2d);
    }else{
        printf("%d%d/0%d\n",ns,uf,bc2d);
    }
    
 
    return 0;
}