#include <stdio.h>
#include<stdlib.h>

main(){

    int misir, kola, su, fiyat;
    printf("mýsýr sayýsýný yazýnýz:");
    scanf("%d",&misir);
    printf("kola sayisini giriniz");
    scanf("%d",&kola);
    printf("su sayýsýný giriniz");
    scanf("%d", &su);
    fiyat= misir*5 + kola*3 + su*2;
    printf("fiyat: %d", fiyat);


    return 0;
}
