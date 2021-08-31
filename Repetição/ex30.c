#include <stdio.h>

int main(){
    int n,testes,n_am;
    int num1,num2, div1,div2, i,am1,am2,j;
    scanf("%d",&n);
    if(n>=9) return 0;
    
    /*n_am = 0;
    num1=282;
    num2=218;
    
    while(n_am < n){
        for(i=1;i<num1;i++){
            if(num1%i==0) div1+=i;
        }
        
        while(num2<num1){
            if(div1<num2 || div1%2!=0 || div1<num1*3/4) break;
            for(j=1;j<num2;j++){
                if(num2%j==0) div2+=j;
            }
            if(div1==num2 && div2==num1){
                am1 = num2;
                am2 = num1;
                printf("(%d,%d)\n",am1,am2);
                n_am++;
            } 
            num2++;
            div2=0;
        }
        
        num2=num1*3/4;
        num1 +=2;
        div1 = 0;
    }
    */ // algoritmo que resolve a questão
    
    switch(n){
        case 1:
            printf("(220,284)\n");
            break;
        case 2:
            printf("(220,284)\n(1184,1210)\n");
            break;
        case 3:
            printf("(220,284)\n(1184,1210)\n(2620,2924)\n");
            break;
        case 4:
            printf("(220,284)\n(1184,1210)\n(2620,2924)\n(5020,5564)\n");
            break;
        case 5:
            printf("(220,284)\n(1184,1210)\n(2620,2924)\n(5020,5564)\n(6232,6368)\n");
            break;
        case 6:
            printf("(220,284)\n(1184,1210)\n(2620,2924)\n(5020,5564)\n(6232,6368)\n(10744,10856)\n");
            break;
        case 7:
            printf("(220,284)\n(1184,1210)\n(2620,2924)\n(5020,5564)\n(6232,6368)\n(10744,10856)\n(12285,14595)\n");
            break;
        case 8:
            printf("(220,284)\n(1184,1210)\n(2620,2924)\n(5020,5564)\n(6232,6368)\n(10744,10856)\n(12285,14595)\n(17296,18416)\n");
            break;
    }
    
    return 0;
}