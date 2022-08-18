


#include <stdio.h>
#include <stdlib.h>


int main(){

    int taban,i,j,s,b;
    printf("tabanin uzunlugunu girin- tek sayi girin");
    scanf("%d",&taban);
    s=(taban+1)/2; //adım sayısı

    for(i=1;i<=s;i++){

        for(j=0;j<(taban-2*i+1)/2;j++){
            printf(" ");

        }
        for(b=1;b<=2*i-1;b++){
            printf("*");
        }
        printf("\n");

    }


    return 0;
}
