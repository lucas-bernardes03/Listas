#include <stdio.h>
#include <stdlib.h>
#include "complex.c"
#include <unistd.h>

int main(){
    Conjunto C1, C2;
    Conjunto Cuni,Ccomp,Cdiff,Cint;
    Complex x;
    int opg,fb,cj=0,op,ordem;

    system("cls");
    while(1){
        opg = menu();
        
        if(opg == 0) break;
        
        if(opg == 1){ //cria conjunto
            if(cj == 0){
                fb = criaConjunto(&C1);
                system("cls");
                printf("Conjunto C1 criado com sucesso!\n\n");
                cj = 1;
            } 
            else if(cj == 1){
                fb = criaConjunto(&C2);
                system("cls");
                printf("Conjunto C2 criado com sucesso!\n\n");
                cj = 2;
            } 
            else{
                system("cls");
                printf("Os dois conjuntos ja foram criados!\n\n");
            } 
        }

        else if(opg == 2){ //verifica vazio
            system("cls");
            printf("Qual conjunto deseja verificar?\n\n");
            
            printf("1 - C1\n");
            if(cj == 2) printf("2 - C2\n");
            printf("\n");

            printf("--> ");
            scanf("%d",&op);
            
            if(op == 1) fb = conjuntoVazio(&C1);
            else fb = conjuntoVazio(&C2);
            
            if(fb == 1){
                system("cls");
                printf("O Conjunto C%d esta vazio!\n\n",op);
            } 
            else{
                system("cls");
                printf("O Conjunto C%d nao esta vazio!\n\n",op);
            } 
        }
                
        else if(opg == 3){ //adiciona elemento
            system("cls");
            printf("Digite o elemento que deseja inserir (+-a +-bi): ");
            scanf("%d %di",&x.a,&x.b);
            
            printf("\n\nEm qual conjunto deseja inserir?\n\n");
            
            printf("1 - C1\n");
            if(cj == 2) printf("2 - C2\n");
            printf("\n");

            printf("--> ");
            scanf("%d",&op);

            if(op == 1) fb = insereElementoConjunto(x, &C1);
            else fb = insereElementoConjunto(x,&C2);

            if(fb == 1){
                system("cls");
                printf("Elemento iserido com sucesso!\n\n");
            } 
            else{
                system("cls");
                printf("Falha ao inserir elemento! (Ja esta presente)\n\n");
            } 
        }

        else if(opg == 4){ //remove elemento
            system("cls");
            printf("Digite o elemento que deseja retirar: ");
            scanf("%d %di",&x.a,&x.b);
            printf("\n\nDe qual conjunto deseja retirar?\n\n");
            
            printf("1 - C1\n");
            if(cj == 2) printf("2 - C2\n");
            printf("\n");

            printf("--> ");
            scanf("%d",&op);

            if(op == 1) fb = excluirElementoConjunto(x, &C1);
            else fb = excluirElementoConjunto(x,&C2);

            if(fb == 1){
                system("cls");
                printf("Elemento removido com sucesso!\n\n");
            } 
            else{
                system("cls");
                printf("Falha ao remover elemento! (Nao esta presente)\n\n");
            } 
        }

        else if(opg == 5){ //cardinalidade do conjunto
            system("cls");
            printf("De qual conjunto gostaria de ver a cardinalidade?\n\n");

            printf("1 - C1\n");
            if(cj == 2) printf("2 - C2");
            printf("\n");

            printf("--> ");
            scanf("%d",&op);

            system("cls");
            printf("Cardinalidade de C%d: ",op);
            if(op == 1) fb = tamanhoConjunto(&C1);
            else fb = tamanhoConjunto(&C2);
            
            if(fb == 0) printf("Conjunto Vazio!\n\n");
            else printf("%d\n\n",fb);
        }

        else if(opg == 6){ //pertence a
            system("cls");
            printf("Qual elemento deseja checar: ");
            scanf("%d %di",&x.a,&x.b);

            printf("\n\nEm qual conjunto?\n\n");
            printf("1 - C1\n");
            if(cj==2) printf("2 - C2\n");
            printf("\n--> ");
            scanf("%d",&op);

            system("cls");
            if(op == 1) fb = pertenceConjunto(x,&C1);
            else fb = pertenceConjunto(x, &C2);

            if(fb == 0) printf("O elemento nao pertence a C%d!\n\n",op);
            else printf("O elemento pertence a C%d!\n\n",op);
        }

        else if(opg == 7){ //conjuntos identicos
            system("cls");
            fb = conjuntosIdenticos(&C1,&C2);
            if(fb == 1) printf("Os conjuntos C1 e C2 sao identicos!\n\n");
            else printf("Os conjuntos C1 e C2 nao sao identicos!\n\n");
        }

        else if(opg == 8){ //subconjunto C1 em C2
            system("cls");
            fb = subconjunto(&C1,&C2);
            if(fb == 1) printf("C1 e subconjunto de C2!\n\n");
            else printf("C1 nao e subconjunto de C2!\n\n");
        }

        else if(opg == 9){ //complemento de C1
            system("cls");
            Ccomp = complemento(&C1,&C2);
            printf("Conjunto complemento criado!\n\n");
        }

        else if(opg == 10){ //conjunto uniao
            system("cls");
            Cuni = uniao(&C1,&C2);
            printf("Conjunto uniao criado!\n\n");
        }

        else if(opg == 11){ //conjunto interseccao
            system("cls");
            Cint = interseccao(&C1,&C2);
            printf("Conjunto Interseccao criado!\n\n");
        }

        else if(opg == 12){ //conjunto diferenca
            system("cls");
            Cdiff = diferenca(&C1,&C2);
            printf("Conjunto Diferenca criado!\n\n");
        }

        else if(opg == 14){ //copiar conjunto
            system("cls");
            fb = copiarConjunto(&C1, &C2);
            printf("Conjunto copiado!\n\n");
        }

        else if(opg == 15){ //destruir
            system("cls");
            printf("Qual conjunto quer destruir?\n\n");
            printf("1 - C1\n");
            if(cj == 2) printf("2 - C2\n");
            printf("\n--> ");
            scanf("%d",&op);

            system("cls");
            if(op == 1) fb = destroiConjunto(&C1);
            else fb = destroiConjunto(&C2);
            printf("Conjunto C%d destruido!\n\n",op);
        }

        else if(opg == 13){ //imprime o conjunto
            system("cls");
            printf("De qual conjunto deseja ver os elementos?\n\n");
            
            if(C1.last > 0) printf("1 - C1\n");
            if(C2.last > 0) printf("2 - C2\n");
            if(Ccomp.last > 0) printf("3 - Complemento\n");
            if(Cuni.last > 0) printf("4 - Conjunto Uniao\n");
            if(Cint.last > 0) printf("5 - Conjunto Interseccao\n");
            if(Cdiff.last > 0) printf("6 - Conjunto Diferenca\n");

            printf("\n--> ");
            scanf("%d",&op);

            printf("\n\nEm qual ordem?\n\n");
            printf("1 - Crescente\n");
            printf("0 - Decrescente\n\n");
            printf("--> ");
            scanf("%d",&ordem);

            if(op < 3){
                system("cls");
                printf("C%d: ",op);
                if(op == 1) mostraConjunto(&C1,ordem);
                else if(op == 2) mostraConjunto(&C2,ordem);
            }
            
            switch(op){
                case 3:
                    system("cls");
                    printf("Conjunto Complemento: ");
                    mostraConjunto(&Ccomp,ordem);
                    break;
                
                case 4:
                    system("cls");
                    printf("Conjunto Uniao: ");
                    mostraConjunto(&Cuni,ordem);
                    break;

                case 5:
                    system("cls");
                    printf("Conjunto Interseccao: ");
                    mostraConjunto(&Cint,ordem);
                    break;        
                
                case 6:
                system("cls");
                printf("Conjunto Diferenca: ");
                mostraConjunto(&Cdiff,ordem);
                break;

            }  
        }
    }
    return 0;
}