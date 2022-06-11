#include <stdio.h>

int main(){
    int logo[10][10],tv[320][320];
    int logo_n,tv_n;
    int i,j,l,c,ver;
    
    scanf("%d",&logo_n);
    for(i=0;i<logo_n;i++) for(j=0;j<logo_n;j++) scanf("%d",&logo[i][j]);

    scanf("%d",&tv_n);
    for(i=0;i<tv_n;i++) for(j=0;j<tv_n;j++) scanf("%d",&tv[i][j]);

    for(i=0;i<tv_n;i++){
        for(j=0;j<tv_n;j++){
            if(tv[i][j] == logo[0][0]){
                for(l=0;l<logo_n;l++){
                    for(c=0;c<logo_n;c++){
                        if(logo[l][c] == tv[i+l][j+c]) ver = 1;
                        else{
                            ver = 0;
                            break;
                        } 
                    }
                    if(ver == 0) break;
                }
                if(ver == 1){
                    printf("sim\n");
                    return 0;
                }
            }
        }
    } 
    printf("nao\n");

    return 0;
}