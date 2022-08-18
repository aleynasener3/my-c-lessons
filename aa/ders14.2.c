
#include <stdio.h>
#include <stdlib.h>



int main(){

    int i,a,b,cevap ;

    scanf("%d",&b);
    i=1;
    a=1;
    while(i<b){

        cevap=a*(a+1);
        a=a+1,
        i++;
        printf("cevabiniz: %d",cevap);

    }


    return 0;
}
