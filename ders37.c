
#include <stdio.h>
#include <stdlib.h>

int main(){

    char bilgi[40];
    printf("yaziyi yazin");
    scanf("%s",&bilgi);

    printf("%20s\n",bilgi);//20 brlik alan ay�r�p soldan bosluk b�rakarak doldurdu
    printf("%20.5s",bilgi);//20brlik alan ay�rarak 5ini bilgiye ay�r�r�pp soldan bosluk b�rakarak doldurdu



    return 0;
}
