#include <stdio.h>

int main(){
	
	float a, b, c, d, e, f, x, y;
	
	scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
	
	x = (b*f-c*e)/(b*d-a*e);		//cramer
	y = (c*d-a*f)/(b*d-a*e);
	
	printf("O VALOR DE X E = %.2f\n", x);
	printf("O VALOR DE Y E = %.2f\n", y);
	return 0;
}
