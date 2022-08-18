
#include <stdio.h>
#include <stdlib.h>

int main(){

    int i,j,toplam;
    toplam=0;
    for(i=1;i<22;i++){

        j=4*i-3;
        toplam=toplam+j;
    }
    printf("sonucunuz %d ",toplam);


    return 0;
}
