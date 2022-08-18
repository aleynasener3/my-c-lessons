#include <stdio.h>
#include <stdlib.h>


int main(){

    int sayi,b;
    printf("bir sayi girin");

    scanf("%d",sayi);

    b=sayi/100;

    printf("yuzler basamagi= %d \n",b);

    sayi=sayi-100*b;

    b=sayi/10;

    printf("onlar basamagi= %d \n",b);

    sayi=sayi-b*10;

    printf("birler basamagi= %d \n",b);





    return 0;
}
