#include <stdio.h>

void cont_uniq(int * num, int size);

int main(){
    int n,i, num[1000];
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        scanf("%d",&num[i]);
    }

    cont_uniq(num,n);

    return 0;
}

void cont_uniq(int * num, int size){
    int i,j,tmp,swap,rep=0,count=0;
    
    for(j=0;j<size;j++){
        swap = 0;
        for(i=0;i<size-1;i++){
            if(num[i] > num[i+1]){
                tmp = num[i];
                num[i] = num[i+1];
                num[i+1] = tmp;
                swap = 1;
            }
        }
        if(swap == 0) break;
    }

    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(num[i] == num[j]){
                rep++;
                continue;
            }
        }
        printf("%d\n",num[i]);
        i += rep;
        rep = 0;
    }
    
}