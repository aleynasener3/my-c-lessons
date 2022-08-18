

#include <stdio.h>
#include <stdlib.h>


int main(){

    int i,a,puan;
    puan=0;
    int dizi[]={2,1,0,0,2,1,1,2,1,0};

    for (i=0;i<10;i++){
        a=dizi[i];
        switch(a){
            case 0: puan=puan + 1;break;
            case 1: puan=puan;break;
            case 2: puan=puan+3;break;

        }
    }
    printf("puaniniz:%d \n",puan);
    if(puan>12){

        printf("basardiniz");

    }
    else{
        printf("basaramadiniz");
    }





    return 0;

}

