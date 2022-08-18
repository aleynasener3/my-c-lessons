// dersdeneme.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>

int main()
{
    int kacsayi,sayi, eksi, arti, sifir;
    sifir = 0;
    eksi = 0;
    arti = 0;
    std::cout << "kac sayi gireceksiniz";
    std::cin >> kacsayi;
    for (int i = 0; i < kacsayi; i++) {
        std::cout << "sayi girin";
        std::cin >> sayi;
        if (sayi == 0)
            sifir++;
        else if (sayi < 0)
            eksi++;
        else 
            arti++;


    }
    float sifiroran = sifir / kacsayi;
    float artioran = arti / kacsayi;
    float eksioran = eksi / kacsayi;
    std::cout << "sifir oraniniz"<<sifiroran<<std::endl;
    std::cout << "eksi oraniniz" << eksioran<<std::endl;
    std::cout << "arti oraniniz" << artioran<<std::endl;

}

