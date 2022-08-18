#include <stdio.h>
#include <stdlib.h>


int main(){

    int sayi,y,o,b,toplam;
    printf("sayi girin");
    scanf("%d",&sayi);
    y=sayi/100;

    sayi=sayi-100*y;
    o=sayi/10;

    b=sayi-10*o;
    toplam=y+o+b;
    printf("%d",toplam);







    return 0;
}
