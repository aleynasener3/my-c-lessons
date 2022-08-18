
#include <stdio.h>
#include <stdlib.h>


int main(){


    int a,i;
    printf("eleman sayisini giriniz\n");
    scanf("%d",&a);
    char liste[a][10];

    for(i=0;i<=a;i++){

        printf("eleman giriniz\n");
        scanf("%s",liste[a]);

    }
    for(i=0;i<=a;i++){


        printf(" %s",liste[i]);


    }



    return 0;
}
