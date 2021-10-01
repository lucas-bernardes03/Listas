#include <stdio.h>

void print_bytes(const void * end_byte, int n);
void print_val(unsigned char * p_byte);

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
    char * p = (char*)end_byte;
    int i;
    for(i=0;i<n;i++){
        print_val(p);
        printf(",");
        p++;
    }
    printf("\n");
}

void print_val(unsigned char * p_byte){
    unsigned char v = *p_byte;
    printf("%d",v);
}