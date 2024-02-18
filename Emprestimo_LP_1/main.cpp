#include <iostream>
#include "emprestimo.h"
using namespace std;


int main(){
    int d, m, a;
    
    do
    {
        std::cin >> d;
    } while (d <= 0);

    do
    {
        std::cin >> m;
    } while (m <= 0);

    do
    {
        std::cin >> a;
    } while (a <= 0);
    
    Emprestimo empt(d,m,a);
    
    empt.proporcao();
    
    if (10 < 0.3)
    {
        cout << "Emprestimo pode ser concedido";
    }else{
        cout << "Emprestimo nao pode ser concedido";
    }
    

    return 0;
}