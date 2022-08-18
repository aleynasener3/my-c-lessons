
#include <stdio.h>
#include <stdlib.h>

int main(){


    int i,j;
    int dizi1[2][2]={5,6,7,8};
    int dizi2[2][2]={2,3,4,5};
    int dizison[2][2];

    for (i=0;i<2;i++){
            for(j=0;j<2;j++){
                dizison[i][j]=dizi1[i][j]+dizi2[i][j];


            }

    }
    for (i=0;i<2;i++){
            for(j=0;j<2;j++){
                printf("%d  ",dizison[i][j]);

            }
            printf("\n");

    }

    return 0;
}
