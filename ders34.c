
#include <stdio.h>
#include <stdlib.h>

int main(){

    double sayi,sonuc1,sonuc2;
    printf("sayi girin");
    scanf("%lf",&sayi);

    sonuc1=fabs(sayi);//mutlak alma
    printf("mutlak alma sonucu: %f \n",sonuc1);

    sonuc2=log(sayi);//logaritmasını alma e tabanında hesaplıyor
    printf("logaritmasını alma sonucu: %f \n",sonuc2);




    return 0;
}
