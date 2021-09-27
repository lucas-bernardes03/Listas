#include <stdio.h>
#include <string.h>
#include <math.h>

void d_ab(char * a, char * b);

int main(){
    char a[1000], b[1000],ver;
    int i;
    scanf("%[^;\n]%c",a,&ver);
    if(ver != ';'){
        printf("FORMATO INVALIDO!\n");
        return 0;
    }
    else scanf("%[^\n]",b);

    for(i=0;i<strlen(b);i++){
        if(b[i] == ';'){
            printf("FORMATO INVALIDO!\n");
            return 0;
        }
    }
    
    d_ab(a,b);
    
    return 0;
}

void d_ab(char * a, char * b){
    int i, va[5] = {0,0,0,0,0},vb[5] = {0,0,0,0,0};
    double dab,voga,voge,vogi,vogo,vogu;
    
    for(i=0;i<strlen(a);i++){
        if(a[i] == 'A' || a[i] == 'a') va[0]++;
        else if(a[i] == 'E' || a[i] == 'e') va[1]++;
        else if(a[i] == 'I' || a[i] == 'i') va[2]++;
        else if(a[i] == 'O' || a[i] == 'o') va[3]++;
        else if(a[i] == 'U' || a[i] == 'u') va[4]++;
    }

    for(i=0;i<strlen(b);i++){
        if(b[i] == 'A' || b[i] == 'a') vb[0]++;
        else if(b[i] == 'E' || b[i] == 'e') vb[1]++;
        else if(b[i] == 'I' || b[i] == 'i') vb[2]++;
        else if(b[i] == 'O' || b[i] == 'o') vb[3]++;
        else if(b[i] == 'U' || b[i] == 'u') vb[4]++;
    }

    voga = va[0]-vb[0];
    voge = va[1]-vb[1];
    vogi = va[2]-vb[2];
    vogo = va[3]-vb[3];
    vogu = va[4]-vb[4];

    dab = sqrt(pow(voga,2) + pow(voge,2) + pow(vogi,2) + pow(vogo,2) + pow(vogu,2));

    printf("(%d,%d,%d,%d,%d)\n",va[0],va[1],va[2],va[3],va[4]);
    printf("(%d,%d,%d,%d,%d)\n",vb[0],vb[1],vb[2],vb[3],vb[4]);
    printf("%.2lf\n",dab);
}