#include <iostream>
#include <string>
#include "funcionario.h"

using namespace std;

int main(){

    int count;
    string a1,b1,a2,b2;
    float salario;

    cin >> count;

    Funcionario func[count];

    for (int i = 0; i < count; i++)
    {

        cin >> a1;
        cin >> a2;
        cin >> salario;
        
        func[i].setname1(a1);
        func[i].setname1(a2);
        func[i].salario = salario;

    }

    for (int i = 0; i < count; i++)
    {
        cout << func[i].nome1 << " " << func[i].nome2 << " - " << func[i].salario << " - " << func[i].getSalario() << endl;
    }
    
    

    return 0;
}