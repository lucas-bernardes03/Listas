#include <stdio.h>
#include <string.h>

int main(){
    int e, i, k,len, param = 1;
    char str[50];

    while(1){
        e = scanf("%[^\n]%*c",str);
        if(e == EOF) break;
        len = strlen(str);
        for(i=0;i<len;i++){
            if(str[i] != ' '){
                if(param == 1){
                    if(str[i] >= 'a' && str[i] <= 'z'){
                        str[i] -= 32;
                        param = 0;
                    }
                    else param = 0;
                }
                else{
                    if(str[i] >= 'A' && str[i] <= 'Z'){
                        str[i] += 32;
                        param = 1;
                    }
                    else param = 1;
                }
            }
        }
        printf("%s\n",str);
        param = 1;
    }

    return 0;
}