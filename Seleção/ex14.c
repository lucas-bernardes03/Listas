#include <stdio.h>

int main(){
    
    int data, dia, mes, ano;
    scanf("%d", &data);

    dia = (data/1000000);
    mes = (data/10000) % 100;
    ano = data % 10000;

    if(dia==0 || dia>=32){
        printf("Data invalida!\n");
        return 0;
    }
    if(mes==2 && dia>28){
        printf("Data invalida!\n");
        return 0;
    }
    if(mes==4 && dia==31 || mes==6 && dia==31 || mes==9 && dia==31 || mes==11  && dia==31){
        printf("Data invalida!\n");
        return 0;
    }
    if(mes==0 || mes>12){
        printf("Data invalida!\n");
        return 0;
    }



    if(mes==1){
        printf("%d de janeiro de %d\n", dia, ano);
    }
    if(mes==2){
        printf("%d de fevereiro de %d\n", dia, ano);
    }
    if(mes==3){
        printf("%d de março de %d\n", dia, ano);
    }
    if(mes==4){
        printf("%d de abril de %d\n", dia, ano);
    }
    if(mes==5){
        printf("%d de maio de %d\n", dia, ano);
    }
    if(mes==6){
        printf("%d de junho de %d\n", dia, ano);
    }
    if(mes==7){
        printf("%d de julho de %d\n", dia, ano);
    }
    if(mes==8){
        printf("%d de agosto de %d\n", dia, ano);
    }
    if(mes==9){
        printf("%d de setembro de %d\n", dia, ano);
    }
    if(mes==10){
        printf("%d de outubro de %d\n", dia, ano);
    }
    if(mes==11){
        printf("%d de novembro de %d\n", dia, ano);
    }
    if(mes==12){
        printf("%d de dezembro de %d\n", dia, ano);
    }

    return 0;
}