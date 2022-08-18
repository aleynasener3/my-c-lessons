
#include <stdio.h>
#include <stdlib.h>

int main(){

    char kitapadi[30],yazar[30],sonhali[30];
    printf("kitap adini vr yazar adini girin");
    scanf("%s%s",&kitapadi,&yazar);

    strcat(sonhali,kitapadi);
    strcat(sonhali,"   ");
    strcat(sonhali,yazar);
    printf("%s",sonhali);


    return 0;
}
