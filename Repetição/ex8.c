#include <stdio.h>

int main(){

    int pa, pb, i;
    scanf("%d %d",&pa,&pb);

    for(i=0;pa<=pb;i++){
        pa += pa*0.03;
        pb += pb*0.015;
    }
    printf("ANOS = %d\n", i);

    return 0;
}