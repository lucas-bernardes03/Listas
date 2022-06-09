#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef struct {
    int moradores;
    double consumo;
    double cmpp;
} Casas;

void consumo(int n, int city);

int main(){
    int ni,city=1;
    while(1){
        scanf("%d",&ni);
        if(ni == 0) break;
        consumo(ni,city);
        city++;
    }
    return 0;
}

void consumo(int n, int city){
    double min,med,tcon=0,nci=0;
    int i,k,idx,tmor=0,np=0;
    Casas * casa;
    casa = (Casas *)malloc(n*sizeof(Casas));
    
    for(i=0;i<n;i++){
        scanf("%d %lf",&(casa[i].moradores),&(casa[i].consumo));
        casa[i].cmpp = floor(casa[i].consumo/(double)casa[i].moradores);
    } 

    printf("Cidade# %d\n",city);

    min = 201;
    for(i=0;i<n;i++){
        for(k=0;k<n;k++){
            if(casa[k].cmpp < min && casa[k].cmpp != -1){
                min = casa[k].cmpp;
                idx = k;
            }
        }
        for(k=0;k<n;k++){
            if(casa[k].cmpp == min){
                np += casa[k].moradores;
                casa[k].cmpp = -1;
                nci++;
                if(nci >= 2) i++;  
            }
        }
        printf("%d-%.0lf ",np,min);
        casa[idx].cmpp = -1;
        min = 201;
        np = 0;
        nci = 0;
    }
    printf("\n");
    
    for(i=0;i<n;i++){
        tmor += casa[i].moradores;
        tcon += casa[i].consumo;
    }

    med = tcon/(double)tmor;
    printf("Consumo medio: %.2lf m3.\n\n",med);

    free(casa);
}