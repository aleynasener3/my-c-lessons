
#include <stdio.h>
#include <stdlib.h>



int main(){

    char sehir[5][15];
    int i;
    for (i=0;i<3;i++){

        printf("sehir adi giriniz\n");
        scanf("%s",sehir[i]);




    }
    printf("girdiginiz sehirler %s %s %s\n",sehir[0],sehir[1],sehir[2]);


    return 0;
}
