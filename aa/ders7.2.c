#include <stdio.h>
#include<stdlib.h>

main(){

    float dogru, yanlis, net;
    printf("doðru sayinizi giriniz:");
    scanf("%f",&dogru);
    printf("yanlis sayinizi giriniz:");
    scanf("%f",&yanlis);
    net=dogru- yanlis*0.25;
    printf("netiniz: %f", net);



    return 0;
}
