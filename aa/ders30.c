
#include <stdio.h>
#include <stdlib.h>

int main(){

    int sayi1,sayi2,i,toplam;
    toplam=0;

    printf("birinci sayiyi girin");
    scanf("%d",&sayi1);
    printf("ikinci sayiyi girin");
    scanf("%d",&sayi2);

    for(i=sayi1;i<=sayi2;i++){

        toplam=toplam +i;

    }

    printf("toplam: %d",toplam);



    return 0;
}
