
#include <stdio.h>
#include <stdlib.h>


int main(){

    FILE *dosya;
    dosya=fopen("C:\\Users\\Aleyna\\Desktop\\deneme.txt","w");// dosya oluþturma

    putc('z',dosya);//harf
    fputs("\n",dosya);
    fputs("aleyna",dosya);//metin
    fclose(dosya);

    return 0;
}
