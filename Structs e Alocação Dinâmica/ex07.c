#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
    double u,x,y,z;
} Point;

void distance(int n);

int main(){
    int n;
    scanf("%d",&n);
    distance(n);
    return 0;
}

void distance(int n){
    int i;
    double dis;
    Point * point;
    point = (Point*)malloc(n*sizeof(Point));

    for(i=0;i<n;i++) scanf("%lf %lf %lf %lf",&point[i].u,&point[i].x,&point[i].y,&point[i].z);
    
    for(i=0;i<n-1;i++){
        dis = sqrt( ( pow(point[i].u - point[i+1].u,2) + pow(point[i].x - point[i+1].x,2) + pow(point[i].y - point[i+1].y,2) + pow(point[i].z - point[i+1].z,2) ) );
        printf("%.2lf\n",dis);
    }
    
    free(point);
}