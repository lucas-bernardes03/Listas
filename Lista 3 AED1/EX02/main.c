#include <stdio.h>
#include <string.h>

#define MAX 30

void quickSort(char  string[],int low,int high);
void swap(char *a, char *b);
int partition(char string[], int low, int high);

int main(){
    int f,i;
    char string[MAX];
    
    printf("Digite a palavra: ");
    scanf("%[^\n]%*c",string);

    f = strlen(string);
    
    printf("Palavra Desordenada: ");
    for(i=0;i<f;i++) printf("%c",string[i]);
    printf("\n");
    
    quickSort(string,0,f-1);

    printf("Palavra Ordenada: ");
    for(i=0;i<f;i++) printf("%c",string[i]);
    printf("\n");

    return 0;
}

int partition(char string[], int low, int high) {
  char pivo = string[high],aux;
  int i = (low - 1),j;

  for (j=low;j<high;j++) {
    if (string[j]<=pivo) {
      i++;
      swap(&string[i], &string[j]);
    }
  }
  swap(&string[i+1], &string[high]);
  
  return (i+1);
}

void quickSort(char string[], int low, int high) {
  if (low < high) {
    int pi = partition(string, low, high);
    quickSort(string, low, pi-1);
    quickSort(string, pi+1, high);
  }
}

void swap(char *a, char *b) {
  char t = *a;
  *a = *b;
  *b = t;
}