//LUCAS BERNARDES FEITOSA 202103751

#include <stdio.h>
#include "lista.c"

int main(){
    int op,m1,m2,cod,tm;
    char nome[30];
    Lista l1[200],l2[200];
    m1=0;
    m2=0;

    do{
        system("clear");
        printf("MENU\n\n");
        printf("1 - Inserir produto\n");
        printf("2 - Remover produto\n");
        printf("3 - Busca - Sequencial\n");
        printf("4 - Busca - Binaria (Ordene crescente primeiro)\n");
        printf("5 - Ordenar (Crescente) - Insertion\n");
        printf("6 - Ordenar (Decrescente) - Selection\n");
        printf("7 - Comparar listas\n");
        printf("8 - Imprimir lista\n\n");
        printf("0 - Sair\n\n");
        printf("--> ");
        scanf("%d%*c",&op);

        switch(op){
            case 0:
                break;
            
            case 1: 
                printf("\n\nDigite o nome do produto: ");
                scanf("%[^\n]%*c",nome);
                
                printf("\nDigite o codigo do produto: ");
                scanf("%d%*c",&cod);
                
                printf("Em qual lista deseja inserir (1 | 2)? ");
                scanf("%d%*c",&tm);

                if(tm == 1){
                    m1 = insere(l1, m1, nome, cod);
                    printf("\nProduto inserido com sucesso!\n\n");
                    printf("Pressione ENTER para voltar.");
                    getchar();
                } 
                else if(tm == 2){
                    m2 = insere(l2, m2, nome, cod);
                    printf("\nProduto inserido com sucesso!\n\n");
                    printf("Pressione ENTER para voltar.");
                    getchar();
                } 
                else{
                    printf("Lista Invalida!\n\n");
                    printf("Pressione ENTER para voltar.");
                    getchar();
                } 
                break;

            case 2:
                printf("Digite o codigo do produto que deseja remover: ");
                scanf("%d%*c",&cod);

                printf("\nDe qual lista deseja remover (1 | 2)? ");
                scanf("%d%*c",&tm);

                if(tm==1) m1 = remover(l1,m1,cod);
                else if(tm==2) m2 = remover(l2,m2,cod);
                break;

            case 3:
                printf("Digite o codigo do produto que deseja buscar: ");
                scanf("%d%*c",&cod);

                printf("\nEm qual lista deseja efetuar a busca (1 | 2)? ");
                scanf("%d%*c",&tm);

                if (tm == 1) busca_s(l1, m1, cod);
                else if (tm == 2) busca_s(l2, m2, cod);

                printf("Pressione ENTER para voltar.");
                getchar();
                break;
            
            case 4:
                printf("Digite o codigo do produto que deseja buscar: ");
                scanf("%d%*c", &cod);

                printf("\nEm qual lista deseja efetuar a busca (1 | 2)? ");
                scanf("%d%*c", &tm);

                if (tm == 1) busca_b(l1, m1, cod);
                else if (tm == 2) busca_b(l2, m2, cod);

                printf("Pressione ENTER para voltar.");
                getchar();
                break;
                
            case 5: //ordenacao crescente usando insertion sort
                printf("Qual lista deseja ordenar (1 | 2)? ");
                scanf("%d%*c",&tm);

                if(tm==1) crescente(l1,m1);
                else if(tm==2) crescente(l2,m2);
                
                printf("\n\nLista ordenada com sucesso!\n\n");
                printf("Pressione ENTER para voltar.");
                getchar();
                break;
            
            case 6: //ordenacao decrescente usando selection sort
                printf("Qual lista deseja ordenar (1 | 2)? ");
                scanf("%d%*c", &tm);

                if (tm == 1) decrescente(l1, m1);
                else if (tm == 2) decrescente(l2, m2);

                printf("\n\nLista ordenada com sucesso!\n\n");
                printf("Pressione ENTER para voltar.");
                getchar();
                break;
            
            case 7:
                comparar(l1,m1,l2,m2);
                printf("Pressione ENTER para voltar.");
                getchar();
                break;

            case 8:
                system("clear");
                printf("Qual lista deseja imprimir (1 | 2)? ");
                scanf("%d%*c",&tm);
                
                if(tm==1) imprime(l1,m1);
                else if(tm==2) imprime(l2,m2);
                
                printf("Pressione ENTER para voltar.");
                getchar();
                break;

            default:
                printf("Opcao invalida!\n");
                printf("Pressione ENTER para voltar.");
                getchar();
                break;

        }

    } while(op != 0);
 
    return 0;
}