
#include <stdio.h>
#include <stdlib.h>

int main(){

    int i,j,yuks,genis;
    printf("yuksekligi girin");
    scanf("%d",&yuks);
    printf("genisligi girin");
    scanf("%d",&genis);

    for(i=0;i<yuks;i++){

        for(j=0;j<genis;j++){

            printf("*");
        }
        printf("\n");
    }



    return 0;
}
