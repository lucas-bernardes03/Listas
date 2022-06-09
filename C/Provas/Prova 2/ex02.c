#include <stdio.h>
#include <math.h>

int classifica_iris( double pt, double pl, double st, double sl, double * d1, double
* d2, double * d3 );

int main(){
    double pt,pl,st,sl;
    double d1,d2,d3;
    int a;
    while(1){
        a = scanf("%lf %lf %lf %lf",&pt,&pl,&st,&sl);

        if(a == EOF) return 0;
        
        classifica_iris(pt,pl,st,sl,&d1,&d2,&d3);
        
        printf("(%.2lf %.2lf %.2lf) ",d1,d2,d3);
        
        if(classifica_iris(pt,pl,st,sl,&d1,&d2,&d3) == 1) printf("setosa\n");
        else if(classifica_iris(pt,pl,st,sl,&d1,&d2,&d3) == 2) printf("virginica\n");
        else printf("versicolor\n");
    }
    
    return 0;
}

int classifica_iris( double pt, double pl, double st, double sl, double * d1, double
* d2, double * d3 ){
    double dset,dvir,dver;
    dset = sqrt(pow((6.85 - pt),2) + pow((3.07 - pl),2) + pow((5.74 - st),2) + pow((2.07 - sl),2));
    dvir = sqrt(pow((5.00 - pt),2) + pow((3.41 - pl),2) + pow((1.46 - st),2) + pow((0.24 - sl),2));
    dver = sqrt(pow((5.90 - pt),2) + pow((2.74 - pl),2) + pow((4.39 - st),2) + pow((1.43 - sl),2));
    *d1 = dset;
    *d2 = dvir;
    *d3 = dver;
    if(dset < dvir && dset < dver) return 1;
    else if(dvir < dset && dvir < dver) return 2;
    else if(dver < dset && dver < dvir) return 3;
}