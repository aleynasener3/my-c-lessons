
#include <stdio.h>
#include <stdlib.h>


int main(){

    FILE *dosya;
    char veri1[20]="kirmizi ";
    char veri2[20]="baslikli ";
    char veri3[20]="kiz";
    dosya=fopen("C:\\Users\\Aleyna\\Desktop\\deneme3.txt","w");// dosya oluþturma

    fputs(veri1,dosya);
    fputs(veri2,dosya);
    fputs(veri3,dosya);

    fclose(dosya);

    return 0;
}

