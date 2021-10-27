#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct lista{
        char pais[35];
        char fn[35];
    };
typedef struct lista Lista;

void country_list(char * pais);

int main (){
    char pais[20];
    int v;
    while(1){
        v = scanf("%s",pais);
        if(v == EOF) break;
        country_list(pais);
    }
    return 0;
}

void country_list(char * pais){
    int i;
    Lista main[30];
    
    strcpy(main[0].pais,"brasil");
    strcpy(main[1].pais,"alemanha");
    strcpy(main[2].pais,"austria");
    strcpy(main[3].pais,"coreia");
    strcpy(main[4].pais,"espanha");
    strcpy(main[5].pais,"grecia");
    strcpy(main[6].pais,"estados-unidos");
    strcpy(main[7].pais,"inglaterra");
    strcpy(main[8].pais,"australia");
    strcpy(main[9].pais,"portugal");
    strcpy(main[10].pais,"suecia");
    strcpy(main[11].pais,"turquia");
    strcpy(main[12].pais,"argentina");
    strcpy(main[13].pais,"chile");
    strcpy(main[14].pais,"mexico");
    strcpy(main[15].pais,"antardida");
    strcpy(main[16].pais,"canada");
    strcpy(main[17].pais,"irlanda");
    strcpy(main[18].pais,"belgica");
    strcpy(main[19].pais,"italia");
    strcpy(main[20].pais,"libia");
    strcpy(main[21].pais,"siria");
    strcpy(main[22].pais,"marrocos");
    strcpy(main[23].pais,"japao");

    strcpy(main[0].fn,"Feliz Natal!");
    strcpy(main[1].fn,"Frohliche Weihnachten!");
    strcpy(main[2].fn,"Frohe Weihnacht!");
    strcpy(main[3].fn,"Chuk Sung Tan!");
    strcpy(main[4].fn,"Feliz Navidad!");
    strcpy(main[5].fn,"Kala Christougena!");
    strcpy(main[6].fn,"Merry Christmas!");
    strcpy(main[7].fn,"Merry Christmas!");
    strcpy(main[8].fn,"Merry Christmas!");
    strcpy(main[9].fn,"Feliz Natal!");
    strcpy(main[10].fn,"God Jul!");
    strcpy(main[11].fn,"Mutlu Noeller");
    strcpy(main[12].fn,"Feliz Navidad!");
    strcpy(main[13].fn,"Feliz Navidad!");
    strcpy(main[14].fn,"Feliz Navidad!");
    strcpy(main[15].fn,"Merry Christmas!");
    strcpy(main[16].fn,"Merry Christmas!");
    strcpy(main[17].fn,"Nollaig Shona Dhuit!");
    strcpy(main[18].fn,"Zalig Kerstfeest!");
    strcpy(main[19].fn,"Buon Natale!");
    strcpy(main[20].fn,"Buon Natale!");
    strcpy(main[21].fn,"Milad Mubarak!");
    strcpy(main[22].fn,"Milad Mubarak!");
    strcpy(main[23].fn,"Merii Kurisumasu!");
    
    for(i=0;i<24;i++){
        if(strcmp(pais,main[i].pais) == 0){
            printf("%s",main[i].fn);
            printf("\n");
            return;
        } 
    }
    printf("-- NOT FOUND --\n");
}