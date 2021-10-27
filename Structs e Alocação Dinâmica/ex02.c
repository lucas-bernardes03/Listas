#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mercado(void);

int main(){
    int nt,i;
    scanf("%d",&nt);
    for(i=0;i<nt;i++) mercado();
    return 0;
}

void mercado(void){
    struct market{
        char food[50];
        double price;
    };
    typedef struct market Market;
    
    Market* size;
    int a,c,i,k,j,t=0;
    double total=0,uni;
    char compra[50];

    scanf("%d",&a);
    size = (Market *)malloc(a*sizeof(Market));

    for(i=0;i<a;i++){
        scanf("%*c %[^ ]",&(size[i].food));
        scanf("%lf",&(size[i].price));
    }

    scanf("%d",&c);
    for(i=0;i<c;i++){
        scanf("%*c %[^ ]",compra);
        scanf("%lf",&uni);
        
        for(k=0;k<a;k++){
            if(strcmp(compra,size[k].food) == 0) total += (uni * size[k].price);
        }

    }   
    printf("R$ %.2lf\n",total);
    free(size);
}