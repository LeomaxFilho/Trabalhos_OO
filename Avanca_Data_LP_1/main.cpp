#include <iostream>
#include "data.h"

int main(){
    int d, m, a, z;

    std::cin >> d;
    std::cin >> m;
    std::cin >> a;
    std::cin >> z;

    Data MinhaData (d, m, a);
    MinhaData.showdata(z);

    return 0;
}