#include <stdio.h>
#include<stdlib.h>

main(){
//belli bir say�ya b�l�mden kalan� yorumlama
//&& ve || veya demek
// ve olunca iki durumun da true olmas� laz�m
//veya olunca iki durumdan biri olsa da true ��kt�s� veriyor
    int sayi;
    scanf("%d",&sayi);
    if (sayi%2==0 && sayi%3==0){

        printf("sayi 6ya bolunur");
    }
    else{

        printf("sayi 6ya bolunmez");
    }


    return 0;
}
