#include <stdio.h>
#include <string.h>

void str_clean(char * str, char * clr);

int main(){
    char str[256];
    char clr[256];
    
    scanf("%[^\n]", str);
    scanf("%*c%[^\n]", clr);
    
    str_clean(str, clr);
    
    return 0;
}

void str_clean(char * str, char * clr){
    int lenstr, lenclr, i ,k, app=0;
    char new_str[256];
    lenstr = strlen(str);
    lenclr = strlen(clr);

    for(i=0;i<lenstr;i++){
        for(k=0;k<lenclr;k++){
            if(str[i] == clr[k]) app++;
        }
        if(app == 0) printf("%c",str[i]);
        app=0;
    }
    printf("\n");;
}