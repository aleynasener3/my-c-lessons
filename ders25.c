
#include <stdio.h>
#include <stdlib.h>

int main(){

    int a,b,e,i,j;
    printf("satir  girin");
    scanf("%d",&a);
    printf("sutunu girin");
    scanf("%d",&b);
    int dizi[a][b];
    e=a+b;//eleman sayisi
    for (i=0;i<a;i++){
        for(j=0;j<b;j++){

            printf("elemaný girin");
            scanf("%d",&dizi[i][j]);

        }

    }
    printf("olusturdugunuz dizi \n");
    for (i=0;i<a;i++){
        for(j=0;j<b;j++){


            printf("%d",dizi[i][j]);

        }
        printf("\n");
    }


    return 0;
}
