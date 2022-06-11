#include <stdio.h>

int main(){

    int n, i;
    scanf("%d",&n);
    
    double temp, celcius;

    for(i=0;i<n;i++){
        scanf("%lf", &temp);
        celcius = 5*(temp - 32)/9;
        printf("%.2lf FAHRENHEIT EQUIVALE A %.2lf CELSIUS\n",temp,celcius);
    }

    return 0;
}