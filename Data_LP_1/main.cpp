#include <iostream>
#include "data.h"

int main(){
    int d, m, a;

    std::cin >> d;
    std::cin >> m;
    std::cin >> a;

    Data MinhaData (d, m, a);
    MinhaData.showdata();

    return 0;
}