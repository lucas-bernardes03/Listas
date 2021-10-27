#include <stdio.h>

typedef struct{
    int num;
    int den;
} Fracao;

Fracao fraction(int a, int b);
Fracao sum_frac(Fracao f1, Fracao f2);
Fracao sub_frac(Fracao f1, Fracao f2);
Fracao mult_frac(Fracao f1, Fracao f2);
Fracao div_frac(Fracao f1, Fracao f2);
Fracao red_frac(Fracao res);

int main(){
    int n1,n2,d1,d2,v;
    char op;
    Fracao f1,f2,res;
    
    while(1){
        v = scanf("%d %d %c %d %d",&n1,&d1,&op,&n2,&d2);
        if(v == EOF) break;
        f1 = fraction(n1,d1);
        f2 = fraction(n2,d2);

        if(op == '+') res = sum_frac(f1,f2);
        else if(op == '-') res = sub_frac(f1,f2);
        else if(op == '*') res = mult_frac(f1,f2);
        else if(op == '/') res = div_frac(f1,f2);

        res = red_frac(res);

        printf("%d %d\n",res.num,res.den);
    }

    return 0;
}

Fracao fraction(int a, int b){
    Fracao f;
    f.num = a;
    f.den = b;
    return f;
}

Fracao sum_frac(Fracao f1, Fracao f2){
    Fracao res;
    res.num = f1.num*f2.den + f2.num*f1.den;
    res.den = f1.den*f2.den;
    return res;
}

Fracao sub_frac(Fracao f1, Fracao f2){
    Fracao res;
    res.num = f1.num*f2.den - f2.num*f1.den;
    res.den = f1.den*f2.den;
    return res;
}

Fracao mult_frac(Fracao f1, Fracao f2){
    Fracao res;
    res.num = f1.num*f2.num;
    res.den = f1.den*f2.den;
    return res;
}

Fracao div_frac(Fracao f1, Fracao f2){
    Fracao res;
    res.num = f1.num*f2.den;
    res.den = f1.den*f2.num;
    return res;
}

Fracao red_frac(Fracao res){
    int i,j,t=2;
    int nd=0;

    while(t <= res.den){
        if(res.num % 2 == 0 && res.den % 2 == 0){
            res.num /= 2;
            res.den /= 2;
        }
        else{
            t++;
            while(t <= res.den){
                if(res.num % t == 0 && res.den % t == 0){
                    res.num /= t;
                    res.den /= t;
                }
                else t += 2;
            }
        }
    }

    return res;
}