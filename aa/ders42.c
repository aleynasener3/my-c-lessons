
#include <stdio.h>
#include <stdlib.h>

struct kitapbilgi{

    char adi[20];
    char yazar[20];
    int fiyat ;



};



int main(){

    struct kitapbilgi kb={"kuantum fiziði","adam",10};
    printf("%s\n",kb.adi);
    printf("%s\n",kb.yazar);
    printf("%d\n",kb.fiyat);



    return 0;
}
