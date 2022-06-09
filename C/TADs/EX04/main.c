#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "bacteria.c"

int main(){
    World M1,M2,Clone,Joint,War,Prob;
    Bacteria b;
    int opg,m,n,mun=0,op,bac,fb,x,y;
    float p;

    system("cls");
    while(1){
        opg = menu();
        if(opg == 0) break;
        
        else if(opg == 1){ //novo mundo
            system("cls");
            printf("Insira o tamanho do mundo (linhas,colunas): ");
            scanf("%d,%d",&n,&m);

            system("cls");
            if(M1.m == 0 && M2.n == 0 || mun == 0){
                newWorld(&M1,n,m);
                mun++;
                printf("Mundo 1 Criado!\n\n");
            }

            else if(M2.m == 0 && M2.n == 0 || mun == 1){
                newWorld(&M2,n,m);
                mun++;
                printf("Mundo 2 Criado!\n\n");
            } 

            else printf("Os dois mundos ja foram criados!\n\n");
            
        }
        
        else if(opg == 2){ //clonar mundo
            system("cls");
            printf("Qual mundo deseja clonar?\n\n");
            if(M1.n > 0 && M1.m > 0) printf("1 - Mundo 1\n");
            if(M2.n > 0 && M2.m > 0) printf("2 - Mundo 2\n");
            printf("\n--> ");
            scanf("%d",&op);

            system("cls");
            if(op == 1) Clone = cloneWorld(&M1);
            else Clone = cloneWorld(&M2);
            printf("Mundo Clonado!\n\n");
        }

        else if(opg == 3){ //liberar mundo
            system("cls");
            printf("Qual mundo deseja liberar?\n\n");
            if(M1.n > 0 && M1.m > 0) printf("1 - Mundo 1\n");
            if(M2.n > 0 && M2.m > 0) printf("2 - Mundo 2\n");
            printf("\n--> ");
            scanf("%d",&op);

            system("cls");
            if(op == 1) freeWorld(&M1);
            else freeWorld(&M2);
            printf("Mundo Liberado!\n\n");
        }

        else if(opg == 4){ //mundo aleatorio
            system("cls");
            printf("Quantas bacterias deseja inserir: ");
            scanf("%d",&bac);

            printf("\nEm qual mundo deseja inserir?\n\n");
            if(M1.n > 0 && M1.m > 0) printf("1 - Mundo 1\n");
            if(M2.n > 0 && M2.m > 0) printf("2 - Mundo 2\n");
            printf("\n--> ");
            scanf("%d",&op);

            if(op == 1) fb = randomWorld(&M1,bac);
            else fb = randomWorld(&M2,bac);

            system("cls");
            if(fb == 1) printf("Sucesso ao adicionar as bacterias!\n\n");
            else printf("Falha ao adicionar as bacterias!\n\n");
        }

        else if(opg == 5){ //adicionar bacteria aleatoria pos
            system("cls");
            printf("Digite a Ordem e Forca da bacteria (o,f): ");
            scanf("%d,%d",&b.ordem,&b.forca);

            printf("\nEm qual mundo deseja inserir?\n\n");
            if(M1.n > 0 && M1.m > 0) printf("1 - Mundo 1\n");
            if(M2.n > 0 && M2.m > 0) printf("2 - Mundo 2\n");
            printf("\n--> ");
            scanf("%d",&op);

            system("cls");
            if(op == 1) fb = addBacterium(&M1,b);
            else fb = addBacterium(&M2,b);
            
            if(fb==1) printf("Bacteria adicionada com sucesso!\n\n");
            else printf("Falha ao adicionar a bacteria!\n\n");
        }

        else if(opg == 6){ //adicionar bacteria posicionada
            system("cls");
            printf("Digite a Ordem e Forca da bacteria (o,f): ");
            scanf("%d,%d",&b.ordem,&b.forca);
            printf("\nDigite a linha e coluna que deseja inseri-la (linha, coluna): ");
            scanf("%d,%d",&x,&y);

            printf("\nEm qual mundo deseja inserir?\n\n");
            if(M1.n > 0 && M1.m > 0) printf("1 - Mundo 1\n");
            if(M2.n > 0 && M2.m > 0) printf("2 - Mundo 2\n");
            printf("\n--> ");
            scanf("%d",&op);

            system("cls");
            if(op == 1) fb = addBacteriumXY(&M1,b,x,y);
            else fb = addBacteriumXY(&M2,b,x,y);
            
            if(fb==1) printf("Bacteria adicionada com sucesso!\n\n");
            else printf("Falha ao adicionar a bacteria!\n\n");
        }

        else if(opg == 7){ //mata bacteria de ordem n
            system("cls");
            printf("Digite a Ordem da bacteria: ");
            scanf("%d",&bac);

            printf("\nEm qual mundo deseja elimina-la?\n\n");
            if(M1.n > 0 && M1.m > 0) printf("1 - Mundo 1\n");
            if(M2.n > 0 && M2.m > 0) printf("2 - Mundo 2\n");
            printf("\n--> ");
            scanf("%d",&op);

            system("cls");
            if(op == 1) fb = killBacterium(&M1,bac);
            else fb = killBacterium(&M2,bac);
            
            if(fb==1) printf("Bacteria eliminada com sucesso!\n\n");
            else printf("Falha ao eliminar a bacteria!\n\n");
        }

        else if(opg == 8){ //eliminar bacteria posicionada
            system("cls");
            printf("Digite a posicao da bacteria (linha, coluna): ");
            scanf("%d,%d",&x,&y);

            printf("\nEm qual mundo deseja elimina-la?\n\n");
            if(M1.n > 0 && M1.m > 0) printf("1 - Mundo 1\n");
            if(M2.n > 0 && M2.m > 0) printf("2 - Mundo 2\n");
            printf("\n--> ");
            scanf("%d",&op);

            system("cls");
            if(op == 1) fb = killBacteriumXY(&M1,x,y);
            else fb = killBacteriumXY(&M2,x,y);
            
            if(fb==1) printf("Bacteria eliminada com sucesso!\n\n");
            else printf("Falha ao eliminar a bacteria!\n\n");
        }

        else if(opg == 9){ //uniao pacifica
            system("cls");
            Joint = jointWorlds(&M1,&M2);
            if(Joint.m > 0 && Joint.n > 0) printf("Uniao feita!\n\n");
            else printf("Nao foi possivel realizar a uniao!\n\n");
        }

        else if(opg == 10){ //uniao guerra
            system("cls");
            War = warWorlds(&M1,&M2);
            if(War.m > 0 && War.n > 0) printf("Guerra feita!\n\n");
            else printf("Nao foi possivel realizar a guerra!\n\n");
        }

        else if(opg == 11){ //uniao guerra probabilistica
            system("cls");
            printf("Digite a probabilidade (0<p<=1): ");
            scanf("%f",&p);

            system("cls");
            Prob = probabilisticWarWorlds(&M1,&M2,p);
            if(Prob.m > 0 && Prob.n > 0) printf("Guerra Probabilistica feita!\n\n");
            else printf("Nao foi possivel realizar a guerra!\n\n");
        }

        else if(opg == 12){ //numero de bacterias
            system("cls");
            printf("De qual mundo?\n\n");
            if(M1.n > 0 && M1.m > 0) printf("1 - Mundo 1\n");
            if(M2.n > 0 && M2.m > 0) printf("2 - Mundo 2\n");
            printf("\n--> ");
            scanf("%d",&op);

            system("cls");
            if(op == 1) fb = sizeWorld(&M1);
            else fb = sizeWorld(&M2);
            
            printf("Numero de bacterias: %d\n\n",fb);         
        }        

        else if(opg == 13){ //forca das bacterias
            system("cls");
            printf("De qual mundo?\n\n");
            if(M1.n > 0 && M1.m > 0) printf("1 - Mundo 1\n");
            if(M2.n > 0 && M2.m > 0) printf("2 - Mundo 2\n");
            printf("\n--> ");
            scanf("%d",&op);

            system("cls");
            if(op == 1) fb = forceWorld(&M1);
            else fb = forceWorld(&M2);
            
            printf("Forca das bacterias: %d\n\n",fb);   
        }

        else if(opg == 14){ //mostrar mundo
            system("cls");
            printf("Qual mundo deseja ver?\n\n");
            if(M1.n > 0 && M1.m > 0) printf("1 - Mundo 1\n");
            if(M2.n > 0 && M2.m > 0) printf("2 - Mundo 2\n");
            if(Clone.n > 0 && Clone.m > 0) printf("3 - Clone\n");
            if(Joint.n > 0 && Joint.m > 0) printf("4 - Uniao Pacifica\n");
            if(War.n > 0 && War.m > 0) printf("5 - Guerra\n");
            if(Prob.n > 0 && Prob.m > 0) printf("6 - Guerra Probabilistica\n");
            printf("\n--> ");
            scanf("%d",&op);

            system("cls");
            if(op==1) fb = showWorld(&M1);
            else if(op==2) fb = showWorld(&M2);
            else if(op==3) fb = showWorld(&Clone);
            else if(op==4) fb = showWorld(&Joint);
            else if(op==5) fb = showWorld(&War);
            else if(op==6) fb = showWorld(&Prob);

        } 

    }

    return 0;
}