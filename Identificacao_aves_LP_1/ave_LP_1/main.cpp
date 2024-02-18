#include <iostream>
#include "aves.h"

int main(){

    int a, b, c, d, e;

    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    std::cin >> d;
    std::cin >> e;

    Ave ave(a,b,c,d,e);

    ave.resultado();

    return 0;
}