#include <stdio.h>
#include<stdlib.h>

main(){

    int bagaj, el, pbagaj, pel, fiyat;
    bagaj=32;
    el=12;
    pbagaj= bagaj-15;
    pel= el-8;
    fiyat = pbagaj*5 + pel*5;
    printf("fiyat: %d",fiyat);
    return 0;
}
