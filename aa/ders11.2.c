#include <stdio.h>
#include <stdlib.h>

int main(){

    int i=1;
    int a,b,c;
    a=0;
    b=1;
    printf("1\n");
    for(i=1;i<=5;i++){

        c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;


    }


    return 0;
}
