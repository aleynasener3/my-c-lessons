
#include <stdio.h>
#include <stdlib.h>


int main(){

    FILE *dosya;
    char karakter[50];
    dosya=fopen("C:\\Users\\Aleyna\\Desktop\\deneme2.txt","r");// dosya okuma

    fgets(karakter,30,dosya);
    puts(karakter);
    fclose(dosya);



    return 0;
}

