

#include <stdio.h>
#include <stdlib.h>


int main(){

    int i,j;
    int dizi[2][3]={1,2,3,4,5,6};

    for (i=0;i<2;i++){

        for (j=0;j<3;j++){

            printf("%d   ",dizi[i][j]);

        }

        printf("\n");
    }



    return 0;
}
