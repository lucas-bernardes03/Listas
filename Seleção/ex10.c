#include <stdio.h>

int main(){
    
    int x, m, c, d, u, initx;
    scanf("%d", &x);

    m = (x/1000) %10;
    c = (x/100) %10;
    d = (x/10) %10;
    u = x %10;
    
    initx = x;
    
    if(x>9999 || x<=0){
        printf("Numero invalido!\n");
        return 0;
    }
    if(x<=9999 && x>=1000){
        if(m==1){
            printf("(quarta ordem) %d = 1 unidade de milhar",x);
            x = x%1000;
        }
        else if(m>1){
            printf("(quarta ordem) %d = %d unidades de milhar",x, m);
            x = x%1000;
        }
    } else if(m==0  && c!=0){
        printf("(terceira ordem) %d = ",initx);
    }
    if(m>1 && c!=0 || m==1 && c!=0){
        printf(" + ");
    }
    if(x<=999 && x>=100){
        if(c==1){
            printf("1 centena");
            x = x%100;
        }else if(c>1){
            printf("%d centenas", c);
            x = x%100;
        }
    } else if(m==0 && c==0 && d!=0){
        printf("(segunda ordem) %d = ",initx);
    }
    if(m!=0 && c==0 && d!=0|| c==1 && d!=0 || c>1 && d!=0){
        printf(" + ");
    }
    if(x<=99 && x>=10){
        if (d==1){
            printf("1 dezena");
            x = x%10;
        }else if(d>1){
            printf("%d dezenas", d);
            x = x%10;
        }
    }else if(m==0 && c==0 && d==0 && u!=0){
        printf("(primeira ordem) %d = ",initx);
    }
    if(c!=0 && d==0 % u!=0 || m!=0 && c==0 && d==0 && u!=0 || d==1 && u!=0 || d>1 && u!=0){
        printf(" + ");
    }   
    if(u<10 && u>0){
        if(u==1){
            printf("1 unidade");
        }else if(u>1){
            printf("%d unidades", u);
        }
    }
    printf(" = ");
    if(m!=0){
        if(c==0 && d==0 && u==0){
            printf("%d\n",m*1000);
            return 0;
        }else printf("%d + ",m*1000);
    }
    if(c!=0){
        if(d==0 && u==0){
            printf("%d\n",c*100);
            return 0;
        }else printf("%d + ",c*100);
    }
    if(d!=0){
        if(u==0){
            printf("%d\n",d*10);
            return 0;
        }else printf("%d + ",d*10);
    }
    if(u!=0){
        printf("%d\n",u);
    }
    return 0;
}