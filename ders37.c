
#include <stdio.h>
#include <stdlib.h>

int main(){

    char bilgi[40];
    printf("yaziyi yazin");
    scanf("%s",&bilgi);

    printf("%20s\n",bilgi);//20 brlik alan ayırıp soldan bosluk bırakarak doldurdu
    printf("%20.5s",bilgi);//20brlik alan ayırarak 5ini bilgiye ayırırıpp soldan bosluk bırakarak doldurdu



    return 0;
}
