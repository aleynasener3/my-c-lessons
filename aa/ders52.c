
#include <stdio.h>
#include <stdlib.h>

#define puan 1.95


int main(){

    int turkce;
    float net;
    printf("turkce d sayisini girin:");
    scanf("%d",&turkce);
    net=turkce*puan;
    printf("puaniniz:%f",net);



    return 0;
}
