// aa.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
void intre(int& value) {
    value++;

}

int main()
{
    int a = 5;
    intre(a);
    std::cout << a;
}


