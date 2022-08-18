
#include <stdio.h>
#include <stdlib.h>

struct kayit{
    char ad[20];
    int no;
    int sinif;
    float ort;

};

int main(){

    struct kayit ogr;
    printf("adinizi girin");
    scanf("%s",&ogr.ad);

    printf("okul no girin");
    scanf("%d",&ogr.no);

    printf("sinifinizi girin");
    scanf("%d",&ogr.sinif);

    printf("ortalamanizi girin");
    scanf("%f",ogr.ort);





    return 0;
}
