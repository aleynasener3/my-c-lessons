
#include <stdio.h>
#include <stdlib.h>

int main(){

    int sayi,toplam;
    printf("sayi girin");
    scanf("%d",&sayi);

    toplam=sayi;
    while (sayi!=0){
        printf("sayi girin");
        scanf("%d",&sayi);

        toplam=toplam+sayi;


    }

    printf("toplamınız: %d",toplam);



    return 0;
}
