#include <stdio.h>
#include <stdlib.h>

int main(){

    double derece,sonucsin,sonuccos;
    printf("dereceyi girin");
    scanf("%lf",&derece);

    sonuccos=cos(derece);//radyan türünde hesaplýyor
    sonucsin=sin(derece);

    printf("sin sonuc: %f\n",sonucsin);
    printf("cos sonuc: %f",sonuccos);



    return 0;
}

