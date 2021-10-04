#include <stdio.h>
 
int main(){
    
    int a,b,c,d,e,temp,inita,initb,initc,initd,inite;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
 
    inita=a;
    initb=b;
    initc=c;
    initd=d;
    inite=e;
 
    if(a>b){
        temp=a;
        a=b;
        b=temp;
    }
    if(a>c){
        temp=a;
        a=c;
        c=temp;
    }
    if(a>d){
        temp=a;
        a=d;
        d=temp;
    }
    if(a>e){
        temp=a;
        a=e;
        e=temp;
    }
    if(e<c){
        temp=e;
        e=b;
        b=temp;
    }
    if(e<d){
        temp=e;
        e=b;
        b=temp;
    }
    if(e<b){
        temp=e;
        e=b;
        b=temp;
    }
    
    printf("MENOR: %d, MAIOR: %d\n",a,e);
    
    if(inita<initb && initb<initc && initc<initd && initd<inite){
        printf("ORDENADO CRESCENTE\n");
    }else if(inita>initb && initb>initc && initc>initd && initd>inite){
        printf("ORDENADO DECRESCENTE\n");
    }else{
        printf("DESORDENADO\n");
    }
 
    return 0;
}