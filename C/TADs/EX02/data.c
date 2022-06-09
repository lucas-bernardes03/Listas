#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "data.h"

Data * criaData (unsigned int dia, unsigned int mes, unsigned int ano){
    Data * d;
    d = (Data *)malloc(sizeof(Data));
    
    if(ano < 1900 || ano > 2200 || mes < 1 || mes > 12 || dia < 1 || dia > 31){
        d = NULL;
        return d;
    }

    if(mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        if(dia > 30){
            d = NULL;
            return d;
        }
    }

    if(mes == 2){
        if(ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0){
            if(dia < 30){
                d->dia = dia;
            }
            else{
                d = NULL;
                return d;
            }
        }
        else if(dia > 28){
            d = NULL;
            return d;
        }
    }

    d->dia = dia;
    d->mes = mes;
    d->ano = ano;

    return d;
}

Data * copiaData (Data d){
    Data * c;
    c = (Data*)malloc(sizeof(Data));
    c->dia = d.dia;
    c->mes = d.mes;
    c->ano = d.ano;

    return c;
    free(c);
}

void liberaData (Data * d){
    d = NULL;
    free(d);
}

Data * somaDiasData (Data d, unsigned int dias){
    int valida=0;
    Data * ds;
    ds = (Data*)malloc(sizeof(Data));

    d.dia = d.dia + dias;

    while(valida == 0){
        
        if(d.mes == 1 || d.mes == 3 || d.mes == 5 || d.mes == 7 || d.mes == 8 || d.mes == 10 || d.mes == 12){
            if(d.dia > 31){
                d.dia -= 31;
                d.mes++;
            }
        }

        else if(d.mes == 2 && d.dia > 28){ 
            if(d.ano % 4 == 0 && d.ano % 100 != 0 || d.ano % 400 == 0){
                if(d.dia > 29){
                    d.dia -= 29;
                    d.mes++;
                }
            }
            else{
                d.dia -= 28;
                d.mes++;
            }
        }

        else if(d.mes == 4 || d.mes == 6 || d.mes == 9 || d.mes == 11){
            if(d.dia > 30){
                d.dia -= 30;
                d.mes++;
            }
        } 

        if(d.mes > 12){
            d.mes -= 12;
            d.ano++;
        }

        valida = dataValida(d);
    }
    
    ds->dia = d.dia;
    ds->mes = d.mes;
    ds->ano = d.ano;

    return ds;

    free(ds);
}

Data * subtrairDiasData (Data d, unsigned int dias){
    int valida=0;
    Data * ds;
    ds = (Data*)malloc(sizeof(Data));

    d.dia = d.dia - dias;

    while(valida == 0){

        if(d.dia < 1){
            d.mes--;
            
            if(d.mes < 1){
                d.mes = 12;
                d.ano--;
            }

            if(d.mes == 1 || d.mes == 3 || d.mes == 5 || d.mes == 7 || d.mes == 8 || d.mes == 10 || d.mes == 12){
                d.dia += 31;
            }

            else if(d.mes == 2){ 
                if(d.ano % 4 == 0 && d.ano % 100 != 0 || d.ano % 400 == 0){
                    d.dia += 29;
                }
                else{
                    d.dia += 28;
                }
            }

            else if(d.mes == 4 || d.mes == 6 || d.mes == 9 || d.mes == 11){
                d.dia += 30;
            }

        }

        valida = dataValida(d);
    }
    
    ds->dia = d.dia;
    ds->mes = d.mes;
    ds->ano = d.ano;

    return ds;

    free(ds);
}

void atribuirData (Data * d, unsigned int dia, unsigned int mes, unsigned int ano){
    d->dia = dia;
    d->mes = mes;
    d->ano = ano;
}

unsigned int obtemDiaData (Data d){
    return d.dia;
}

unsigned int obtemMesData (Data d){
    return d.mes;
}

unsigned int obtemAnoData (Data d){
    return d.ano;
}

unsigned int bissextoData (Data d){
    if(d.ano % 4 == 0 && d.ano % 100 != 0 || d.ano % 400 == 0) return 1;
    else return 0;
}

int comparaData (Data d1, Data d2){
    if(d1.ano < d2.ano) return -1;
    else if(d1.ano > d2.ano) return 1;

    if(d1.ano == d2.ano){
        if(d1.mes < d2.mes) return -1;
        else if(d1.mes > d2.mes) return 1;

        if(d1.mes == d2.mes){
            if(d1.dia < d2.dia) return -1;
            else if(d1.dia > d2.dia) return 1;
            else return 0;           
        }
    }
}

unsigned int numeroDiasDatas (Data d1, Data d2){
    unsigned int diff=0;
    
    if(d1.ano > d2.ano) diff += (d1.ano - d2.ano) * 365;
    else diff += (d2.ano - d1.ano) * 365;

    if(d1.mes > d2.mes) diff += (d1.mes - d2.mes) * 30;
    else diff += (d2.mes - d1.mes ) * 30;

    if(d1.dia > d2.dia) diff += (d1.dia - d2.dia);
    else diff += (d2.dia - d1.dia);

    return diff;
}

unsigned int numeroMesesDatas (Data d1, Data d2){
    unsigned int diff=0;
    if(d1.ano > d2.ano) diff += d1.ano - d2.ano;
    else diff += d2.ano - d1.ano;

    if(d1.mes > d2.mes) diff += d1.mes - d2.mes;
    else diff += d2.mes - d1.mes;

    return diff;
}

unsigned int numeroAnosDatas (Data d1, Data d2){
    unsigned int diff=0;
    if(d1.ano > d2.ano) diff += d1.ano - d2.ano;
    else diff += d2.ano - d1.ano;
    return diff;
}

unsigned int obtemDiaSemanaData (Data d){
    //1 de 1900 - seg
    int dias=0;

    dias += (d.ano - 1900) * 365 + (d.ano - 1900)/4;
    dias += (d.mes - 1) * 30 + (d.ano - 1900)*6;
    dias += d.dia - 1;

    dias = (dias % 7); // dias mod 7 = 0 - segunda/ dias mod 7 = 6 - doming;
    return dias; 
}

int dataValida(Data d){
    if(d.mes == 1 || d.mes == 3 || d.mes == 5 || d.mes == 7 || d.mes == 8 || d.mes == 10 || d.mes == 12){
        if(d.dia > 31 || d.dia < 1) return 0;
    }

    else if(d.mes == 2){
        if(d.ano % 4 == 0 && d.ano % 100 != 0 || d.ano % 400 == 0){
            if(d.dia > 29 || d.dia < 1) return 0;
        }
        else{
            if(d.dia > 28 || d.dia < 1) return 0;
        }
    }

    else if(d.mes == 4 || d.mes == 6 || d.mes == 9 || d.mes == 11){
        if(d.dia > 30 || d.dia < 1) return 0;
    }

    if(d.mes > 12 || d.mes < 1) return 0;

    if(d.ano > 2200 || d.ano < 1900) return 0;

    return 1;
}

void imprimeData (Data d, char * formato){
    char data[10],dia[2],mes[2],ano[4];  

    if(strcmp(formato,"ddmmaaaa") == 0){      
        printf("Data: %d/%d/%d\n\n",d.dia,d.mes,d.ano);
    }

    else if(strcmp(formato,"aaaammdd") == 0){     
        printf("Data: %d/%d/%d\n\n",d.ano,d.mes,d.dia);
    }

    else if(strcmp(formato,"mm") == 0){     
        printf("Data: %d\n\n",d.mes);
    }

    else if(strcmp(formato,"dd") == 0){     
        printf("Data: %d\n\n",d.dia);
    }

    else if(strcmp(formato,"ddmm") == 0){     
        printf("Data: %d/%d\n\n",d.dia,d.mes);
    }

}










