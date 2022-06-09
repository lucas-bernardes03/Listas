#include <stdio.h>

void strings(int n, char * str);

int main(){
    char frase[500];
    int nt,i,n;
    scanf("%d",&nt);
    
    for(i=0;i<nt;i++){
        scanf("%d %[^\n]",&n,frase);
        strings(n, frase);
        printf("\n");
    }
    
    return 0;
}

void strings(int n, char * str){
    int i,k,j;
    k=0;
    if(n==0) printf("\n");
    else{
        j=0;
        while((int)str[j] != 0){
            k++;
            j++;
        }
        if(n>=k) printf("%s",str);
        else{
            for(i=0;i<n;i++){
                printf("%c",str[i]);
            }
        }
        k=0;
    }   
}