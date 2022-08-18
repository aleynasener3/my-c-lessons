

#include <stdio.h>
#include <stdlib.h>


int main(){



    printf("kelimenin uzunlugu: %d",strlen("merhaba dunya"));//kaç harften oluþtuðunu sayma


    char kaynak[30]="Aleyna";
    char kopya[30]="";

    strcpy(kopya,kaynak); //kaynaðý kopyaya kopyaladý ve hafýzaya aldý

    char nereden[30]="aleyna";
    char nereye[30]="";

    strncpy(nereye,nereden,4);//öncekinden farklý olarak baþtan kaç karakteri alacaðný da belirtiyoruz




    return 0;
}
