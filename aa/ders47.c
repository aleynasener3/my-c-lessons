

#include <stdio.h>
#include <stdlib.h>

int main(){

    char harf='a';
    char *pt =&harf;

    printf("%x\n",pt);
    pt++;
    printf("%x",pt);



    return 0;
}
