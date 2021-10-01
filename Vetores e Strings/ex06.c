#include <stdio.h>

int main(){
    int n,i,k;
    int nl, nv, nc;
    char v[10000];
    scanf("%d",&n);
    nl=0;
    nv=0;
    nc=0;
    for(i=0;i<n;i++){
        scanf("%*c %[^\n]",v);
        for(k=0;k<sizeof(v);k++){
            if((int)v[k] == 0) break;
            if((int)v[k] >= 65 && (int)v[k] <= 90 || (int)v[k] >= 97 && (int)v[k] <= 122){
                nl++;
                if(v[k] == 'a' || v[k] == 'e' || v[k] == 'i' || v[k] == 'o' || v[k] == 'u' || v[k] == 'A' || v[k] == 'E' || v[k] == 'I' || v[k] == 'O' || v[k] == 'U') nv++;
                else nc++;
            }
        }
        printf("Letras = %d\n",nl);
        printf("Vogais = %d\n",nv);
        printf("Consoantes = %d\n",nc);
        nl=0;
        nv=0;
        nc=0;
    }
    return 0;
}