

#include <stdio.h>
#include<stdlib.h>



int main(){

    int sayi[]={2,3,4,5};
    int toplam=0;
    int i;


    for(i=0;i<=3;i++){

        toplam=toplam+sayi[i];
        printf("%d\n",toplam);


    }




    return 0;
}
