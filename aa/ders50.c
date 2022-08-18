
#include <stdio.h>
#include <stdlib.h>
int s3;
int kup(int s1){
    s3=s1*s1*s1;
    return s3;


}

int main(){

    int kupsonuc;
    kupsonuc=kup(5);
    printf("%d",kupsonuc);


    return 0;
}
