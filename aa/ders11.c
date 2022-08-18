#include <stdio.h>
#include <stdlib.h>

int main(){

    int sayac=1;
    int i,a;
    printf("bir sayi girin ");
    scanf("%d",&a);
    for (i=1;i<=a;i++){

        sayac=sayac*i;

    }

    printf("%d",sayac);

    return 0;
}
