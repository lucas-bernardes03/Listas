#include <stdio.h>

void print_bytes(const void * end_byte, int n);
void print_bits(unsigned char * p_byte);

int main(){
    double n;
    scanf("%lf",&n);
    unsigned char c;
    unsigned short s;
    unsigned int i;
    float f;
    c=n;
    s=n;
    i=n;
    f=n;
    
    print_bytes(&c,sizeof(unsigned char));
    print_bytes(&s,sizeof(unsigned short));
    print_bytes(&i,sizeof(unsigned int));
    print_bytes(&f,sizeof(float));
    print_bytes(&n,sizeof(double));

    return 0;
}

void print_bytes(const void * end_byte, int n){
    int i;
    char * p = (char *)end_byte;
    for(i=0;i<n;i++){
        print_bits(p);
        printf(" ");
        p++;
    }
    printf("\n");
}

void print_bits(unsigned char * p_byte){
    unsigned char b = *p_byte;
    int i;
    int peso = 128;
    for(i=0;i<8;i++){
        printf("%d",b/peso);
        b = b%peso;
        peso /= 2;
    }
}
