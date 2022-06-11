//LUCAS BERNARDES FEITOSA 202103751

typedef struct lista{
    char nome[30];
    int codigo;
} Lista;

//int max corresponde ao tamanho da lista

int insere(Lista * lista, int max,char * nome, int codigo);
void imprime(Lista * lista, int max);
int remover(Lista * lista, int max, int codigo);

void busca_s(Lista * lista, int max, int codigo); //busca sequencial
void busca_b(Lista *lista, int max, int codigo); //busca binaria, necessario ordenacao crescente primeiro

void crescente(Lista * lista, int max); //ordenacao crescente feita via insertion sort
void decrescente(Lista * lista, int max); //ordenacao decrescente feita via selection sort

void comparar(Lista * l1, int m1, Lista * l2, int m2);