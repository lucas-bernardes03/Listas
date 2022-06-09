#define MAX 1000

typedef struct{
    int a;
    int b;
} Complex;

typedef struct{
    Complex conj[MAX];
    int last;
} Conjunto;

int menu();

int criaConjunto(Conjunto * C); //
int conjuntoVazio(Conjunto * C); //
int insereElementoConjunto(Complex x, Conjunto * C); //
int excluirElementoConjunto(Complex x, Conjunto * C); //
int tamanhoConjunto(Conjunto * C); //
int pertenceConjunto(Complex x, Conjunto * C); //
int conjuntosIdenticos(Conjunto * C1, Conjunto * C2); //
int subconjunto(Conjunto * C1, Conjunto * C2); //

Conjunto complemento(Conjunto * C1, Conjunto * C2); // 
Conjunto uniao(Conjunto * C1, Conjunto * C2); //
Conjunto interseccao(Conjunto * C1, Conjunto * C2); //
Conjunto diferenca(Conjunto * C1, Conjunto * C2); //

void mostraConjunto(Conjunto * C, int ordem); //
int copiarConjunto(Conjunto * C1, Conjunto * C2); // 
int destroiConjunto(Conjunto * C); //
