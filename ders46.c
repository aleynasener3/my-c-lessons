
#include <stdio.h>
#include <stdlib.h>

int main(){

    int sayi=20;
    int *s=&sayi;//sayinin bellek adresini tutuyor

    printf("%d\n",sayi);
    printf("adres 1:%x\n",s);

    s++;
    printf("adres 2:%x",s);



    return 0;
}
