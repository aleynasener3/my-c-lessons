
#include <stdio.h>
#include <stdlib.h>

int main(){

    double sayi,sonuc1,sonuc2;

    printf("sayi girin");
    scanf("%lf",&sayi);

    sonuc1=floor(sayi);//alta yuvarla

    sonuc2=ceil(sayi);//üste yuvarla

    printf("alta yuvarlanmis: %f \n ",sonuc1);

    printf("uste yuvarlanmis: %f",sonuc2);



    return 0;
}
