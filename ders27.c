
#include <stdio.h>
#include <stdlib.h>
//rakamları farklı 3 basamaklı kaç tane sayı oldugunu gösteren program
int main(){

    int a,y,b,o;
    a=0;
    for (y=1;y<10;y++){

        for (o=0;o<10;o++){

            for(b=0;b<10;b++){
                if (y!=b&&b!=o&&o!=y){
                    a=a+1;
                }

            }
        }

    }

    printf("%d",a);

    return 0;
}
