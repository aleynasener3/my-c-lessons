

#include <stdio.h>
#include <stdlib.h>


int main(){

    int a,i,toplam,ortalama;
    printf("eleman sayisini girin\n");
    scanf("%d",&a);
    int liste[a];
    toplam=0;

    for (i=0;i<=a;i++){
        printf("elemani girin\n");
        scanf("%d",&liste[i]);

    }

    for(i=0;i<=a;i++){

        toplam=toplam+liste[i];


    }

    ortalama=toplam/a;
    printf("toplam: %d \n",toplam);
    printf("ortalamanýz: %d",ortalama);




    return 0;
}
