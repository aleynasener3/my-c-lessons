
#include <stdio.h>
#include <stdlib.h>

int main(){

    int i,j,k;
    for (i=0;i<5;i++){

        for(k=5;k>i;k--){
            printf(" ");
                    }

        for(j=0;j<i;j++){
            printf("*");
        }


            printf("\n");

    }

    for (i=0;i<5;i++){

        for(j=0;j<i;j++){
            printf(" ");
        }
        for(k=5;k>i;k--){
            printf("*");
                    }

            printf("\n");

    }



    return 0;
}
