#include <stdio.h>
#include <math.h>

typedef struct{
    float real;
    float cpx;
} Complex;

typedef struct{
    Complex r1;
    Complex r2;
} Raizes;

Raizes calcula(float a, float b, float c);
void complex_print(Raizes r);

int main(){
    Raizes r;
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    r = calcula(a,b,c);
    complex_print(r);
    return 0;
}

Raizes calcula(float a, float b, float c){
    Raizes r;
    float delta;
    delta = pow(b,2) - 4*a*c;

    if(delta > 0){
        r.r1.real = (-b + sqrt(delta))/(2*a);
        r.r1.cpx = 0;
        r.r2.real = (-b - sqrt(delta))/(2*a);
        r.r2.cpx = 0;
    }

    else if(delta == 0){
        r.r1.real = -b/(2*a);
        r.r1.cpx = 0;
        r.r2.real = -b/(2*a);
        r.r2.cpx = 0;
    }

    else if(delta < 0){
        r.r1.real = -b/(2*a);
        r.r1.cpx = sqrt(-delta)/(2*a);
        r.r2.real = -b/(2*a);
        r.r2.cpx = -sqrt(-delta)/(2*a);
    }

    return r;
}

void complex_print(Raizes r){
    if(r.r1.real == 0 && r.r1.cpx == 0) printf("x1 = 0.00\n");
    else{
        if(r.r1.real == 0){
            if(r.r1.cpx == 1) printf("x1 = i\n");
            else if(r.r1.cpx == -1) printf("x1 = -i\n");
            else printf("x1 = %.2fi\n",r.r1.cpx);
        }
        else if(r.r1.cpx == 0) printf("x1 = %.2f\n",r.r1.real);
        else{
            if(r.r1.cpx == 1) printf("x1 = %.2f+i\n",r.r1.real);
            else if(r.r1.cpx == -1) printf("x1 = %.2f-i\n",r.r1.real);
            else {
                if(r.r1.cpx > 0) printf("x1 = %.2f+%.2fi\n",r.r1.real,r.r1.cpx);
                else printf("x1 = %.2f%.2fi",r.r1.real,r.r1.cpx);
            }
        }
    }

    if(r.r2.real == 0 && r.r2.cpx == 0) printf("x2 = 0.00\n");
    else{
        if(r.r2.real == 0){
            if(r.r2.cpx == 1) printf("x2 = i\n");
            else if(r.r2.cpx == -1) printf("x2 = -i\n");
            else printf("x2 = %.2fi\n",r.r2.cpx);
        }
        else if(r.r2.cpx == 0) printf("x2 = %.2f\n",r.r2.real);
        else{
            if(r.r2.cpx == 1) printf("x2 = %.2f+i\n",r.r2.real);
            else if(r.r2.cpx == -1) printf("x2 = %.2f-i\n",r.r2.real);
            else {
                if(r.r2.cpx > 0) printf("x2 = %.2f+%.2fi\n",r.r2.real,r.r2.cpx);
                else printf("x2 = %.2f%.2fi",r.r2.real,r.r2.cpx);
            }
        }
    }
}
