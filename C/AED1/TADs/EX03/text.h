typedef struct{
    char texto[500];
    int size;
} Texto;

Texto * criarTexto (char * t);
void liberarTexto (Texto * t);
unsigned int tamanhoTexto (Texto * t);
void obterTexto (Texto * t);
void mostrarTexto (Texto *t, unsigned int colunas);
Texto * copiarTexto (Texto * t);
void substituirTexto (Texto * t, char * alteracao);
Texto * concatenarTextos (Texto * t1, Texto * t2);
void obterSubtexto (Texto * t, unsigned int inicio, int tamanho, char * sub);
unsigned int encontrarSubtexto (Texto * t, char * subtexto, unsigned int ocorrencia);
int compararTextos (Texto * t1, Texto * t2);