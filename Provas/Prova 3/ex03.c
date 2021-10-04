#include <stdio.h>
#include <string.h>

void remove_vogais(char * str, int * vogais);

int main(){
    char str[256];
    int vogais[5];

    scanf("%[^\n]",str);
    remove_vogais(str,vogais);

    return 0;
}

void remove_vogais(char * str, int * vogais){
    int len, i;
    len = strlen(str);
    for(i=0;i<5;i++) vogais[i] = 0;

    for(i=0;i<len;i++){
        if(str[i] == 'a' || str[i] == 'A') vogais[0]++;
        else if(str[i] == 'e' || str[i] == 'E') vogais[1]++;
        else if(str[i] == 'i' || str[i] == 'I') vogais[2]++;
        else if(str[i] == 'o' || str[i] == 'O') vogais[3]++;
        else if(str[i] == 'u' || str[i] == 'U') vogais[4]++;
        else printf("%c",str[i]);
    }
    printf("\n");

    printf("a: %d\n",vogais[0]);
    printf("e: %d\n",vogais[1]);
    printf("i: %d\n",vogais[2]);
    printf("o: %d\n",vogais[3]);
    printf("u: %d\n",vogais[4]);
}