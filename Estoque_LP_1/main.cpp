#include <iostream>
#include <string>
using namespace std;
#include "estoque.h"

int main(){

    int a1, b1; 
    string c1;
    float d1;
    
    
    cin >> a1;
    cin.ignore(1000,'\n');
    getline(cin, c1);
    cin >> b1;
    if (b1 <= 0)
    {
        b1 = 0;
    }
    cin >> d1;
    if (d1 <= 0)
    {
        d1 = 0;
    }

    Estoque stq1(a1,c1,b1,d1);

    int a2, b2; 
    string c2;
    float d2;

    cin >> a2;
    cin.ignore(1000,'\n');
    getline(cin, c2);
    cin >> b2;
    if (b2 <= 0)
    {
        b1 = 0;
    }
    cin >> d2;
    if (d2 <= 0)
    {
        d2 = 0;
    }


    Estoque stq2(a2,c2,b2,d2);


    stq1.showestoque();
    cout << stq1.getInvoiceAmount() << endl;

    stq2.showestoque();
    cout << stq2.getInvoiceAmount();
    
    return 0;
}