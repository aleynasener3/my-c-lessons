
#include <stdio.h>
#include <stdlib.h>

int sayi1,sayi2,cevap;
char islem;

int main(){


    printf("1. sayiyi girin\n");
    scanf("%d",&sayi1);
    printf("2. sayiyi girin\n");
    scanf("%d",&sayi2);

    cevap= sayi1+sayi2;
    islem='t';
    printf("islemi girin topla-cikar-carp-bol\n");
    scanf("%s",&islem);

    printf("cevabiniiz:%d",cevap);

   switch(islem){
        case 't' :cevap=sayi1+sayi2; printf("%d",cevap);break;
        case 'c': cevap=sayi1-sayi2; printf("%d",cevap); break;
        case 'ca': cevap=sayi1*sayi2; printf("%d",cevap); break;
        case 'b': cevap=sayi1/sayi2; printf("%d",cevap); break;


    }


    return 0;
}
