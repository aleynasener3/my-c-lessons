

#include <stdio.h>
#include <stdlib.h>


int main(){



    printf("kelimenin uzunlugu: %d",strlen("merhaba dunya"));//ka� harften olu�tu�unu sayma


    char kaynak[30]="Aleyna";
    char kopya[30]="";

    strcpy(kopya,kaynak); //kayna�� kopyaya kopyalad� ve haf�zaya ald�

    char nereden[30]="aleyna";
    char nereye[30]="";

    strncpy(nereye,nereden,4);//�ncekinden farkl� olarak ba�tan ka� karakteri alaca�n� da belirtiyoruz




    return 0;
}
