#include <stdio.h>

#define MAX_GRADE 20

typedef struct{
    float coef[MAX_GRADE];
} Poli;

void sum(void);
void sub(void);

int main(){
    int i,nt;
    char op;
    scanf("%d",&nt);
    for(i=0;i<nt;i++){
        scanf("%*c%c%*c",&op);
        if(op == '+') sum();
        else if(op == '-') sub();
    }
    return 0;
}

void sum(void){
    int i,n,g;
    float c;
    Poli p[3];

    for(i=0;i<MAX_GRADE;i++) p[0].coef[i] = 0;
    for(i=0;i<MAX_GRADE;i++) p[1].coef[i] = 0;

    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%f %d",&c,&g);
        p[0].coef[g] = c;
    }


    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%f %d",&c,&g);
        p[1].coef[g] = c;
    }

    for(i=0;i<MAX_GRADE;i++) p[2].coef[i] = p[0].coef[i] + p[1].coef[i];

    for(i=MAX_GRADE-1;i>=0;i--){
        if(p[2].coef[i] != 0){
            if(p[2].coef[i] > 0){
                printf("+");
                if(i==0) printf("%.2lf\n",p[2].coef[i]);
                else printf("%.2fX^%d",p[2].coef[i],i);
            }
            else if(p[2].coef[i] < 0){
                if(i==0) printf("%.2lf\n",p[2].coef[i]);
                else printf("%.2fX^%d",p[2].coef[i],i);
            }
        }
    }
}

void sub(void){
    int i,n,g;
    float c;
    Poli p[3];

    for(i=0;i<MAX_GRADE;i++) p[0].coef[i] = 0;
    for(i=0;i<MAX_GRADE;i++) p[1].coef[i] = 0;

    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%f %d",&c,&g);
        p[0].coef[g] = c;
    }


    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%f %d",&c,&g);
        p[1].coef[g] = c;
    }

    for(i=0;i<MAX_GRADE;i++) p[2].coef[i] = p[0].coef[i] - p[1].coef[i];

    for(i=MAX_GRADE-1;i>=0;i--){
        if(p[2].coef[i] != 0){
            if(p[2].coef[i] > 0){
                printf("+");
                if(i==0) printf("%.2lf\n",p[2].coef[i]);
                else printf("%.2fX^%d",p[2].coef[i],i);
            }
            else if(p[2].coef[i] < 0){
                if(i==0) printf("%.2lf\n",p[2].coef[i]);
                else printf("%.2fX^%d",p[2].coef[i],i);
            }
        }
    }
}