#include <stdio.h>

void cont_uniq(int * num, int size);


int main(){
    int i,ne,num[5000];
    scanf("%d",&ne);
    for(i=0;i<ne;i++){
        scanf("%d",&num[i]);
    }
    cont_uniq(num,ne);
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
                break;
            }
        }
        if(rep == 0) count++;
        i += rep;
        rep = 0;
    }
    printf("%d\n",count);
}