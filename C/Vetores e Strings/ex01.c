#include <stdio.h>

int main (){
    int v[100000], n,i,cont;
    int m, k, num[1000],j;
    
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d", &v[i]);
    }
    cont = 0;
    scanf("%d",&m);
    for(k=0;k<m;k++){
        scanf("%d",&num[k]);
        for(j=0;j<n;j++){
            if(num[k]==v[j]) cont++;
        }
        if(cont!=0) printf("ACHEI\n");
        else printf("NAO ACHEI\n");
        cont = 0;
    }
    
    return 0;
}