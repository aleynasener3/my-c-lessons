
#include <stdio.h>
#include <stdlib.h>


//yuksekligi sorulan dik ucgen yapma

int main(){

    int i,j,yukseklik;
    printf("yuksekligi girin");
    scanf("%d",&yukseklik);

    for (i=0;i<=yukseklik;i++){
        for(j=0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }



    return 0;
}
