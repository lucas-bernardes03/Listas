#include <stdio.h>

int fibonacci(int t1, int t2, int n);

int main(){
    int t1,t2,n;
    scanf("%d %d %d",&t1,&t2,&n);
    printf("%d\n",fibonacci(t1,t2,n));
    return 0;
}

int fibonacci(int t1, int t2, int n){
    int curr = 0;
    int i = 0;
    for(i=3;i<=n;i++){
        curr = t1+t2; 
        if(i%2!=0) t1 = curr;
        else t2 = curr;
    }
    return curr;
}