#define ID_SIZE 4
typedef struct{
    char code[ID_SIZE];
    int p;
    double* coef;
} Poly;

int p_max(char * poly);
double * p_coef(Poly p1, char * poly);
Poly p_read(char * fname, Poly poli);
