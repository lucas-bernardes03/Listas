#include <stdio.h>

int main(){
	
	int valor, m1, n10, n50, n100;
	
	scanf("%d", &valor);
	
	n100 = 0;
	n50 = 0;
	n10 = 0;
	m1 = 0;
	
	while (valor >= 100){
		valor -= 100;
		n100++;
	}
	
	while(valor >= 50){
		valor -=50;
		n50++;
	}
	
	while(valor >= 10){
		valor -= 10;
		n10++;
	}
	
	while(valor >= 1){
		valor -= 1;
		m1++;
	}
				
	printf("NOTAS DE 100 = %d\n", n100);
	printf("NOTAS DE 50 = %d\n", n50);
	printf("NOTAS DE 10 = %d\n", n10);
	printf("MOEDAS DE 1 = %d\n", m1);
	
	return 0;
}
