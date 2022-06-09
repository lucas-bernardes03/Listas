#define MAX 1000

typedef struct{
    int conj[MAX];
    int last;
} Conjunto;

int criaConjunto(Conjunto * C); //
int conjuntoVazio(Conjunto * C); //
int insereElementoConjunto(int x, Conjunto * C); //
int excluirElementoConjunto(int x, Conjunto * C); //
int tamanhoConjunto(Conjunto * C); //
int maior(int x, Conjunto * C); //
int menor(int x, Conjunto * C); // 
int pertenceConjunto(int x, Conjunto * C); //
int conjuntosIdenticos(Conjunto * C1, Conjunto * C2); //
int subconjunto(Conjunto * C1, Conjunto * C2); //
Conjunto complemento(Conjunto * C1, Conjunto * C2); // 
Conjunto uniao(Conjunto * C1, Conjunto * C2); //
Conjunto interseccao(Conjunto * C1, Conjunto * C2); //
Conjunto diferenca(Conjunto * C1, Conjunto * C2); //
Conjunto conjuntoPartes(Conjunto * C);//
void mostraConjunto(Conjunto * C, int ordem); //
int copiarConjunto(Conjunto * C1, Conjunto * C2); // 
int destroiConjunto(Conjunto * C); //



