#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    double u;
    double x;
    double y;
    double z;
    double norma;
} Point;

void calc_norma(int n);

int main(){
    int n;
    scanf("%d",&n);
    calc_norma(n);
    return 0;
}

void calc_norma(int n){
    int i,j, k;
    double m_menor = 2001;
    Point * ponto;
    ponto = (Point *)malloc(n * sizeof(Point));
    for(i=0;i<n;i++){
        scanf("%lf %lf %lf %lf",&(ponto[i].u),&(ponto[i].x),&(ponto[i].y),&(ponto[i].z));
        ponto[i].norma = sqrt( (pow(ponto[i].u,2) + pow(ponto[i].x,2) + pow(ponto[i].y,2) + pow(ponto[i].z,2)) );
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++) if(ponto[j].norma < m_menor){
            m_menor = ponto[j].norma;
            k = j;
        } 
        printf("Vetor: (%.2lf, %.2lf, %.2lf, %.2lf) ",ponto[k].u,ponto[k].x,ponto[k].y,ponto[k].z);
        printf("Norma: %.2lf\n",ponto[k].norma);
        ponto[k].norma = 2001;
        m_menor = 2001;
    }
    
    free(ponto);
}