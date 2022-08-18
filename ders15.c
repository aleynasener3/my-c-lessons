#include <stdio.h>
#include <stdlib.h>

main(){

    char ders;
    printf("ders girin t-m-s-f\n");
    scanf("%s",&ders);
    switch(ders){
        case 't':
        printf("turkce"); break;
        case 'm':
        printf("matematik"); break;
        case 's':
        printf("sosyal"); break;
        case 'f':
        printf("fen"); break;


    }



    return 0;
}
