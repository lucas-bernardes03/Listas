#include <stdio.h>
#include <string.h>
#include "text.c"
#include <unistd.h>

int main(){
    char txt[500],sub[500];
    unsigned int len,oco;
    int opg,op,ver,i,sbop=0;
    Texto *t1 = NULL, *t2 = NULL, *cp = NULL, *cat = NULL;
    
    system("cls");
    while(1){
        if(opg == 0) break;
        printf("MENU\n\n");
        printf("1 - Cria Texto\n");
        printf("2 - Libera Texto\n");
        printf("3 - Tamanho Texto\n");
        printf("4 - Obter Texto\n");
        printf("5 - Mostrar Texto\n");
        printf("6 - Copiar Texto\n");
        printf("7 - Substituir Texto\n");
        printf("8 - Concatenar Textos\n");
        printf("9 - Obter Subtexto\n");
        printf("10 - Encontrar Subtexto\n");
        printf("11 - Comparar Textos\n");
        printf("0 - Sair\n\n");
        printf("--> ");
        scanf("%d",&opg);

        if(opg == 1){ //cria texto
            system("cls");
            printf("Digite o texto: ");
            scanf("%*c%[^\n]",txt);

            if(t1 == NULL){
                t1 = criarTexto(txt);
                system("cls");
                if(t1 == NULL) printf("Falha ao criar texto!\n\n");
                else printf("Texto criado com sucesso!\n\n");
            }
            else{
                t2 = criarTexto(txt);
                system("cls");
                if(t2 == NULL) printf("Falha ao criar texto!\n\n");
                else printf("Texto criado com sucesso!\n\n");
            }
        }

        if(opg == 2){ //libera texto
            system("cls");
            printf("Qual texto deseja liberar?\n\n");
            if(t1 != NULL) printf("1 - Texto 1\n");
            if(t2 != NULL) printf("2 - Texto 2\n");
            printf("\n--> ");
            scanf("%d",&op);

            system("cls");
            if(op == 1) liberarTexto(t1);
            else liberarTexto(t2);
            printf("Texto Liberado!\n\n");
        }

        if(opg == 3){ //tamanho
            system("cls");
            printf("Qual tamanho deseja obter?\n\n");
            if(t1 != NULL) printf("1 - Texto 1\n");
            if(t2 != NULL) printf("2 - Texto 2\n");
            if(cp != NULL) printf("3 - Texto Copiado\n");
            if(cat != NULL) printf("4 - Textos Concatenados\n");
            printf("\n--> ");
            scanf("%d",&op);

            system("cls");
            printf("Tamanho obtido: ");
            if(op == 1) len = tamanhoTexto(t1);
            else if(op==2) len = tamanhoTexto(t2);
            else if(op==3) len = tamanhoTexto(cp);
            else if(op ==4) len = tamanhoTexto(cat);
            printf("%d\n\n",len);
        }

        if(opg == 4){ //obter texto
            system("cls");
            printf("Qual texto deseja obter?\n\n");
            if(t1 != NULL) printf("1 - Texto 1\n");
            if(t2 != NULL) printf("2 - Texto 2\n");
            if(cp != NULL) printf("3 - Texto Copiado\n");
            if(cat != NULL) printf("4 - Textos Concatenados\n");
            if(sbop != 0) printf("5 - Subtexto\n");
            printf("\n--> ");
            scanf("%d",&op);

            system("cls");
            printf("Texto obtido: ");
            if(op == 1) obterTexto(t1);
            else if(op==2) obterTexto(t2);
            else if(op==3) obterTexto(cp);
            else if(op ==4) obterTexto(cat);
            else if(op == 5) for(i=0;i<sbop;i++) printf("%c",sub[i]);
            printf("\n\n");
        }

        if(opg == 5){ //mostrar texto / coluna
            system("cls");
            printf("Qual texto deseja mostrar?\n\n");
            if(t1 != NULL) printf("1 - Texto 1\n");
            if(t2 != NULL) printf("2 - Texto 2\n");
            if(cp != NULL) printf("3 - Texto Copiado\n");
            if(cat != NULL) printf("4 - Textos Concatenados\n");
            printf("\n--> ");
            scanf("%d",&op);

            printf("\nQuantos caracteres por linha: ");
            scanf("%d",&len);

            system("cls");
            printf("Texto:\n");
            if(op == 1) mostrarTexto(t1,len);
            else if(op==2) mostrarTexto(t2,len);
            else if(op == 3) mostrarTexto(cp,len);
            else if(op == 4) mostrarTexto(cat,len);
            printf("\n\n");
        }

        if(opg == 6){ //copiar texto
            system("cls");
            printf("Qual texto deseja copiar?\n\n");
            if(t1 != NULL) printf("1 - Texto 1\n");
            if(t2 != NULL) printf("2 - Texto 2\n");
            printf("\n--> ");
            scanf("%d",&op);

            system("cls");
            if(op==1) cp = copiarTexto(t1);
            else if(op==2) cp = copiarTexto(t2);
            printf("Texto Copiado!\n\n");
        }

        if(opg == 7){ //substituir texto
            system("cls");
            printf("Digite o texto: ");
            scanf("%*c%[^\n]",txt);

            printf("Qual texto deseja substituir?\n\n");
            if(t1 != NULL) printf("1 - Texto 1\n");
            if(t2 != NULL) printf("2 - Texto 2\n");
            printf("\n--> ");
            scanf("%d",&op);

            system("cls");
            if(op==1) substituirTexto(t1,txt);
            else if(op==2) substituirTexto(t2,txt);
            printf("Texto substituido!\n\n");
        }

        if(opg == 8){ //concatenar
            system("cls");
            cat = concatenarTextos(t1,t2);
            printf("Textos concatenados!\n\n");
        }

        if(opg == 9){ //obter subtexto
            system("cls");
            printf("De qual texto deseja o subtexto?\n\n");
            if(t1 != NULL) printf("1 - Texto 1\n");
            if(t2 != NULL) printf("2 - Texto 2\n");
            printf("\n--> ");
            scanf("%d",&op);

            printf("\nPosicao de inicio: ");
            scanf("%d",&len);
            printf("\nTamanho do subtexto: ");
            scanf("%d",&sbop);

            system("cls");
            if(op==1) obterSubtexto(t1,len,sbop,sub);
            else obterSubtexto(t2,len,sbop,sub);
            printf("Subtexto Obtido!\n\n");
        }

        if(opg == 10){ //encontrar subtexto
            system("cls");
            printf("Em qual texto deseja encontra o subtexto?\n\n");
            if(t1 != NULL) printf("1 - Texto 1\n");
            if(t2 != NULL) printf("2 - Texto 2\n");
            printf("\n--> ");
            scanf("%d",&op);

            printf("\nNumero da Ocorrencia: ");
            scanf("%d",&len);

            system("cls");
            if(op==1) oco = encontrarSubtexto(t1,sub,len);
            else oco = encontrarSubtexto(t2,sub,len);
            
            if(oco != 0) printf("Posicao do caracter: %d\n\n",oco);
            else printf("Ocorrencia nao encontrada!\n\n");
        }

        if(opg == 11){ //compara tamanho
            system("cls");
            ver = compararTextos(t1,t2);
            if(ver == 1) printf("Texto 1 maior que Texto 2.\n\n");
            else if(ver == 0) printf("Os dois textos tem o mesmo tamanho.\n\n");
            else printf("O Texto 1 menor que Texto 2.\n\n");
        }

    }
    free(t1);
    free(t2);
    free(cp);
    free(cat);
    return 0;
}