#include <stdio.h>
#include<stdlib.h>

main(){

    int derece;
    printf("dereceyi giriniz");
    scanf("%d",&derece);
    if (derece<=0){
        printf("buz halinde");

    }
    if (100>derece && derece>0){

        printf("su halinde");
    }

    if (derece>=100){

        printf("buhar halinde");
    }

    return 0;
}
