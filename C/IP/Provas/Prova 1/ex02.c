#include <stdio.h>
#include <math.h>

int main(){
       
    double x,y,res;
    char op, eq;
    scanf("%lf%c%lf%c%lf",&x,&op,&y,&eq,&res);
    
    if(op=='+'){
        if(x+y==res){
            printf("CORRETO\n");
        }else{
            printf("ERRADO! O resultado deveria ser: %lf\n",res);
        }
    }
    else if(op=='/'){
        if(fabsf((x/y - res) / res) < 0.0000001){
            printf("CORRETO\n");
        }else{
            printf("ERRADO! O resultado deveria ser: %lf\n",x/y);
        }
    }
    else if(op=='*'){
        if(x*y==res){
            printf("CORRETO\n");
        }else{
            printf("ERRADO! O resultado deveria ser: %lf\n",x*y);
        }
    }
    else{
        if(x-y==res){
            printf("CORRETO\n");
        }else{
            printf("ERRADO! O resultado deveria ser: %lf\n",x-y);
        }
    }
 
    return 0;
}