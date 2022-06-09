#include <stdio.h>

int main(){
    int n,i,k,j,temp;
    char cod[1000];
    scanf("%d",&n);
    k=0;
    for(i=0;i<n;i++){
        scanf("%*c %[^\n]",cod);
        
        for(j=0;j<sizeof(cod);j++){
            if((int)cod[j]==0) break;
            k++;
        }
        for(j=0;j<k;j++){
            if((int)cod[j] >= 65 && (int)cod[j] <= 90 || (int)cod[j] >= 97 && (int)cod[j] <= 122){
                cod[j] += 3;
            }
        }
        for(j=0;j<k/2;j++){
            temp = cod[j];
            cod[j] = cod[k-1-j];
            cod[k-j-1] = temp;
        }
        for(j=0;j<k;j++){
            if(k==1){
                printf("%s",cod);
                return 0;
            } 
            if(j>=k/2) cod[j] -= 1;
        }
        printf("%s\n",cod);
        k=0;
    }
    return 0;
}