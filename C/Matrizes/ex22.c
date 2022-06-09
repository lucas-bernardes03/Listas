#include <stdio.h>

int main(){
    int sudoku[9][9];
    int i,j,k,si,sj,l,c;

    for(i=0;i<9;i++) for(j=0;j<9;j++) scanf("%d",&sudoku[i][j]);

    for(i=0;i<9;i++){ //coluna
        for(j=0;j<9;j++){
            for(k=i;k<8;k++){
                if(sudoku[i][j] == sudoku[k+1][j]){
                    printf("invalido\n");
                    return 0;
                }
            }
        }
    }

    for(j=0;j<9;j++){ //linha
        for(i=0;i<9;i++){
            for(k=j;k<8;k++){
                if(sudoku[i][j] == sudoku[i][k+1]){
                    printf("invalido\n");
                    return 0;
                }
            }
        }
    }

    for(si=0;si<9;si+=3){
        for(sj=0;sj<9;sj+=3){
            for(i=si;i<si+3;i++){
                for(j=sj;j<sj+3;j++){
                    for(l=i;l<si+3;l++){
                        for(c=j;c<sj+3;c++){
                            if(c+1 == sj+3) continue;
                            if(sudoku[i][j] == sudoku[l][c+1]){
                                printf("invalido\n");
                                return 0;
                            }
                        }
                    }
                }
            }
        }
    }
    
    printf("valido\n");

    return 0;
}