
#include <stdio.h>
#include <stdlib.h>

int main(){
    int islem,sayi1,sayi2,sonuc;

    printf("***************");
    printf("\n");
    printf("*****MATEMATIK MENUSU*****\n");
    printf("toplama islemi icin 1\n\n");
    printf("cikarma islemi icin 2\n\n");
    printf("carpma islemi icin 3\n\n");
    printf("bolme islemi icin 4\n\n");
    printf("kare alma islemi icin 5\n\n");
    printf("kup alma islemi icin 6\n\n");
    printf("denklem ---5x^2+4x+7--- islemi icin 7\n\n");
    printf("******************\nislemi girin:");
    scanf("%d",&islem);

    switch(islem){

    case 1: //toplama
        printf("1. sayiyi girin:");
        scanf("%d",&sayi1);
        printf("2. sayiyi girin:");
        scanf("%d",&sayi2);
        sonuc=sayi1+sayi2;
        printf("sonucunuz:%d",sonuc);
        break;

    case 2: //cýkarma
        printf("1. sayiyi girin:");
        scanf("%d",&sayi1);
        printf("2. sayiyi girin:");
        scanf("%d",&sayi2);
        sonuc=sayi1-sayi2;
        printf("sonucunuz:%d",sonuc);
        break;

    case 3://carpma
        printf("1. sayiyi girin:");
        scanf("%d",&sayi1);
        printf("2. sayiyi girin:");
        scanf("%d",&sayi2);
        sonuc=sayi1*sayi2;
        printf("sonucunuz:%d",sonuc);
        break;

    case 4://bolme
        printf("1. sayiyi girin:");
        scanf("%d",&sayi1);
        printf("2. sayiyi girin:");
        scanf("%d",&sayi2);
        sonuc=sayi1/sayi2;
        printf("sonucunuz:%d",sonuc);
        break;

    case 5://kare
        printf("sayiyi girin:");
        scanf("%d",&sayi1);
        sonuc=sayi1*sayi1;
        printf("sonucunuz:%d",sonuc);
        break;

    case 6://kup
        printf("sayiyi girin:");
        scanf("%d",&sayi1);
        sonuc=sayi1*sayi1*sayi1;
        printf("sonucunuz:%d",sonuc);
        break;

    case 7://denklem
        printf("sayiyi girin:");
        scanf("%d",&sayi1);
        sonuc=5*sayi1*sayi1+4*sayi1+7;
        printf("sonucunuz:%d",sonuc);
        break;

    }







    return 0;
}
