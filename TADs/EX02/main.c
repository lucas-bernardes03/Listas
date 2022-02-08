#include <stdio.h>
#include <string.h>
#include "data.c"

int main(){
    unsigned int day,mon,year;
    char formato[8];
    int opg,op;
    Data * d1, * d2, *cpd;
    d1 = NULL;
    d2 = NULL;
    cpd = NULL;

    while(1){
        if(opg == 0) break;
        printf("MENU\n\n");
        printf("1 - Cria Data\n");
        printf("2 - Copia Data\n");
        printf("3 - Destroi data\n");
        printf("4 - Soma Dias\n");
        printf("5 - Subtrai Dias\n");
        printf("6 - Atribui Data\n");
        printf("7 - Obtem Dia\n");
        printf("8 - Obtem Mes\n");
        printf("9 - Obtem Ano\n");
        printf("10 - Ano Bissexto\n");
        printf("11 - Compara Data\n");
        printf("12 - Numero de Dias entre Datas\n");
        printf("13 - Numero de Meses entre Datas\n");
        printf("14 - Numero de Anos entre Datas\n");
        printf("15 - Obtem Dia da Semana\n");
        printf("16 - Imprime Data\n\n");
        printf("0 - Sair\n\n");
        printf("--> ");
        scanf("%d",&opg);

        if(opg == 1){ //cria data
            system("cls");
            printf("Digite o dia/mes/ano: ");
            scanf("%d/%d/%d",&day,&mon,&year);
            
            if(d1 == NULL){
                d1 = criaData(day,mon,year);
                system("cls");
                if(d1 == NULL) printf("Erro ao criar data! (Intervalo valido: 01/01/1900 a 31/12/2200)\n\n");
                else printf("Data criada com sucesso!\n\n");
            } 
            else{
                d2 = criaData(day,mon,year);
                system("cls");
                if(d2 == NULL) printf("Erro ao criar data! (Intervalo valido: 01/01/1900 a 31/12/2200)\n\n");
                else printf("Data criada com sucesso!\n\n");
            }         
            
        }

        else if(opg == 2){ //copia data
            system("cls");
            printf("Qual data deseja copiar?\n\n");
            if(d1 != NULL) printf("1 - Data 1\n");
            if(d2 != NULL) printf("2 - Data 2\n");
            printf("\n--> ");
            scanf("%d",&op);

            system("cls");
            if(op == 1) cpd = copiaData(*d1);
            else cpd = copiaData(*d2);
            printf("Data copiada!\n\n");
        }

        else if(opg == 3){ //libera data
            system("cls");
            printf("Qual deseja destruir?\n\n");
            if(d1 != NULL) printf("1 - Data 1\n");
            if(d2 != NULL) printf("2 - Data 2\n");
            if(cpd != NULL) printf("3 - Data Copiada\n");
            printf("\n--> ");
            scanf("%d",&op);

            system("cls");
            if(op == 1) liberaData(d1);
            else if(op == 2) liberaData(d2);
            else if(op == 3) liberaData(cpd);
            printf("Data liberada com sucesso!\n\n");
        }

        else if(opg == 4){ //soma dias
            system("cls");
            printf("Quantos dias deseja somar: ");
            scanf("%d",&day);

            printf("\nEm qual data deseja somar os  %d dias?\n\n",day);
            if(d1 != NULL) printf("1 - Data 1\n");
            if(d2 != NULL) printf("2 - Data 2\n");
            printf("\n--> ");
            scanf("%d",&op);

            system("cls");
            if(op == 1) d1 = somaDiasData(*d1,day);
            else d2 = somaDiasData(*d2,day);
            printf("Data somada com sucesso!\n\n");

        }

        else if(opg == 5){ //subtrai dias
            system("cls");
            printf("Quantos dias deseja subtrair: ");
            scanf("%d",&day);

            printf("\nEm qual data deseja subtrair os  %d dias?\n\n",day);
            if(d1 != NULL) printf("1 - Data 1\n");
            if(d2 != NULL) printf("2 - Data 2\n");
            printf("\n--> ");
            scanf("%d",&op);

            system("cls");
            if(op == 1) d1 = subtrairDiasData(*d1,day);
            else d2 = subtrairDiasData(*d2,day);
            printf("Data subtraida com sucesso!\n\n");
        }

        else if(opg == 6){ //atribui data
            system("cls");
            printf("Qual data deseja atribuir(dd/mm/aaaa): ");
            scanf("%d/%d/%d",&day,&mon,&year);

            printf("\nPara qual data deseja atribuir?\n\n");
            if(d1 != NULL) printf("1 - Data 1\n");
            if(d2 != NULL) printf("2 - Data 2\n");
            printf("\n--> ");
            scanf("%d",&op);

            system("cls");
            if(op == 1) atribuirData(d1,day,mon,year);
            else atribuirData(d2,day,mon,year);
            printf("Data atribuida com sucesso!\n\n");
        }   

        else if(opg == 7){ //dia 
            printf("De qual data?\n\n");
            if(d1 != NULL) printf("1 - Data 1\n");
            if(d2 != NULL) printf("2 - Data 2\n");
            printf("\n--> ");
            scanf("%d",&op);

            system("cls");
            if(op == 1) day = obtemDiaData(*d1);
            else day = obtemDiaData(*d2);
            printf("Dia da Data %d: %d\n\n",op,day);
        }

        else if(opg == 8){ //mes
            printf("De qual data?\n\n");
            if(d1 != NULL) printf("1 - Data 1\n");
            if(d2 != NULL) printf("2 - Data 2\n");
            printf("\n--> ");
            scanf("%d",&op);

            system("cls");
            if(op == 1) mon = obtemMesData(*d1);
            else mon = obtemMesData(*d2);
            printf("Mes da Data %d: %d\n\n",op,mon);
        }

        else if(opg == 9){ //ano
            printf("De qual data?\n\n");
            if(d1 != NULL) printf("1 - Data 1\n");
            if(d2 != NULL) printf("2 - Data 2\n");
            printf("\n--> ");
            scanf("%d",&op);

            system("cls");
            if(op == 1) year = obtemAnoData(*d1);
            else year = obtemAnoData(*d2);
            printf("Ano da Data %d: %d\n\n",op,year);
        }

        else if(opg == 10){ //bissexto
            system("cls");
            printf("Qual data?\n\n");
            if(d1 != NULL) printf("1 - Data 1\n");
            if(d2 != NULL) printf("2 - Data 2\n");
            printf("\n--> ");
            scanf("%d",&op);

            system("cls");
            if(op == 1) year = bissextoData(*d1);
            else year = bissextoData(*d2);

            if(year == 1) printf("O Ano e bissexto!\n\n");
            else printf("O Ano nao e bissexto!\n\n");     
        }

        else if(opg == 11){ //compara
            system("cls");
            op = comparaData(*d1,*d2);
            if(op == -1) printf("A Data 1 e menor que a Data 2.\n\n");
            else if(op == 0) printf("As duas Datas sao iguais.\n\n");
            else printf("A Data 1 e maior que a Data 2.\n\n");
        }

        else if(opg == 12){ //dias diff
            system("cls");
            day = numeroDiasDatas(*d1,*d2);
            printf("A diferenca e de %d dias.\n\n",day);
        }

        else if(opg == 13){ //mes diff
            system("cls");
            mon = numeroMesesDatas(*d1,*d2);
            printf("A diferenca e de %d dias.\n\n",mon);
        }

        else if(opg == 14){ //anos diff
            system("cls");
            year = numeroAnosDatas(*d1,*d2);
            printf("A diferenca e de %d dias.\n\n",year);
        }

        else if(opg == 15){ //dia da semana
            system("cls");
            printf("De qual data?\n\n");
            if(d1 != NULL) printf("1 - Data 1\n");
            if(d2 != NULL) printf("2 - Data 2\n");
            printf("\n--> ");
            scanf("%d",&op);

            system("cls");
            if(op == 1) day = obtemDiaSemanaData(*d1);
            else day = obtemDiaSemanaData(*d2);
            printf("Dia da Semana: ");

            if(day == 0) printf("Segunda-Feira.\n\n");
            else if(day == 1) printf("Terca-Feira.\n\n");
            else if(day == 2) printf("Quarta-Feira.\n\n");
            else if(day == 3) printf("Quinta-Feira.\n\n");
            else if(day == 4) printf("Sexta-Feira.\n\n");
            else if(day == 5) printf("Sabado.\n\n");
            else if(day == 6) printf("Domingo.\n\n");
            
        }

        else if(opg == 16){ //imprime
            system("cls");
            printf("Qual data deseja imprimir?\n\n");
            if(d1 != NULL) printf("1 - Data 1\n");
            if(d2 != NULL) printf("2 - Data 2\n");
            if(cpd != NULL) printf("3 - Data Copiada\n");
            printf("\n--> ");
            scanf("%d",&op);

            printf("Em qual formato?\n\n");
            printf("ddmmaaaa / aaaammdd / aaaa / mm / dd / ddmm\n\n");
            printf("--> ");
            scanf("%s",formato);

            system("cls");
            if(op == 1) imprimeData(*d1,formato);
            else if(op == 2) imprimeData(*d2,formato);
            else if(op == 3) imprimeData(*cpd,formato);

        }

    }
    free(d1);
    free(d2);
    free(cpd);
    return 0;
}