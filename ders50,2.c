
#include <stdio.h>
#include <stdlib.h>

int sekil(int a,int b){
    int i,j;
    for(i=0;i<a;i++){//yukseklik
        for(j=0;j<b;j++){//genislik
            printf("*");

        }
        printf("\n");
    }

}

int main(){

    int a,b;
    printf("yuksekligi girin");
    scanf("%d",&a);
    printf("genisligi girin");
    scanf("%d",&b);

    sekil(a,b);

    return 0;

}
