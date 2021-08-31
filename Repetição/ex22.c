#include <stdio.h>
#include <math.h>
int main(){
    int n;
    int cat1,cat2,h;
    scanf("%d",&n);

    for(h = 1;h<=n;h++){
        for(cat1=1;cat1<=n;cat1++){
            for(cat2=1;cat2<=n;cat2++){
                if(sqrt(h*h)==sqrt(cat1*cat1 + cat2*cat2) && cat1<cat2){
                    printf("hipotenusa = %d, catetos %d e %d\n",h,cat1,cat2); 

                }
            }
        }
    }


    return 0;
}