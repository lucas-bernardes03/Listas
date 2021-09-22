#include <stdio.h>

int char_find(char c, char * str);

int main(){
    char frase[500], ch;
    int nt, i,index;
    scanf("%d",&nt);

    for(i=0;i<nt;i++){
        scanf("%*c%c%*c%[^\n]",&ch, frase);
        index = char_find(ch, frase);
        if(index!=-1) printf("Caractere %c encontrado no indice %d da string.\n",ch,index);
        else printf("Caractere %c nao encontrado.\n",ch);
    }   
    return 0;
}

int char_find(char c, char * str){
    int i=0;
    while(str[i] != '\0'){
        if(str[i] == c) return i;
        i++;
    }
    return -1;
}