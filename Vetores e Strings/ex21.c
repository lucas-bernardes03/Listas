#include <stdio.h>

int next_letter(char *a , char*b);

int main(){
    char a[10000], b[10000];
    int nt,i,nop;
    scanf("%d",&nt);

    for(i=0;i<nt;i++){
        scanf("%*C%[^ ]",a);
        scanf("%*c%[^\n]",b);
        nop = next_letter(a,b);
        printf("%d\n",nop);
    }
    return 0;
}

int next_letter(char*a,char*b){
    int i=0,op=0;
    while(a[i] != '\0'){
        while(a[i] != b[i]){
            if(a[i] == 'z'){
                a[i] = 'a';
                op++;
            }
            else {
                a[i] += 1;
                op++;
            }
        }
        i++;
    }
    return op;
}