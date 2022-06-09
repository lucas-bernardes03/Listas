#include <stdio.h>

int main(){

	int x, u, d, c;

	scanf("%d", &x);
	
	c = (x/100) % 10;
	d = (x/10) % 10;
	u = x % 10;
	
	printf("%d%d%d\n", u, d ,c);
	return 0;
}
