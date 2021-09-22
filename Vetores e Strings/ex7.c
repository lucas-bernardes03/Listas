#include <stdio.h>

int main(){
    char palavra[5];
    int n,i,k,j,nl;
    scanf("%d",&n);
    nl = 0;
    for(i=0;i<n;i++){
        scanf("%*c %[^\n]",palavra);
        for(k=0;k<sizeof(palavra);k++){
            if((int)palavra[k]==0){
                
                if(palavra[0] == 'o') nl++;
                if(palavra[1] == 'n') nl++;
                if(palavra[2] == 'e') nl++;
                
                if(nl == 2) {
                    printf("1\n");
                    break;
                }
                else {
                    printf("2\n");
                    break;
                }
            }
            if(k==4) printf("3\n");
            nl=0;
        }
    }
    return 0;
}