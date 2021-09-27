#include <stdio.h>

int main(){
    int nt,i,j,k,h;
    int sum=0, false1,false2,tmp,swap;
    int anoes[9];
    
    scanf("%d",&nt);
    
    for(i=0;i<nt;i++){
        for(j=0;j<9;j++){
            scanf("%d",&anoes[j]);
            sum += anoes[j];
        }

        for(k=0;k<9;k++){
            for(j=k+1;j<9;j++){
                if(sum - anoes[k] - anoes[j] == 100){
                    false1 = anoes[k];
                    false2 = anoes[j];
                }
            }
        }
        
        for(k=0;k<9;k++){
            swap = 0;
            for(j=0;j<8;j++){
                if(anoes[j] > anoes[j+1]){
                    tmp = anoes[j];
                    anoes[j] = anoes[j+1];
                    anoes[j+1] = tmp;
                    swap = 1;
                }
            }
            if(swap == 0) break;
        }

        for(k=0;k<9;k++){
            if(anoes[k] != false1 && anoes[k] != false2) printf("%d\n",anoes[k]);
        }

        sum = 0;

    }

    return 0;
}