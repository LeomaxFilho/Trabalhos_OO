#include <iostream>
#include <string>
#include "funcionario.h"

using namespace std;

int main(){

    int count;
    string a1,a2;
    float salario;
    float z = 0.1;

    cin >> count;
    cin.ignore();

    Funcionario func[count];

    for (int i = 0; i < count; i++)
    {

        cin >> a1;
        cin >> a2;
        cin >> salario;
        
        func[i].setname1(a1);
        func[i].setname2(a2);
        func[i].setSalario(salario);
        

    }

    for (int i = 0; i < count; i++)
    {
        cout << func[i].nome1 << " " << func[i].nome2 << " - " << func[i].salario  << " - " << func[i].salarioAnual() << endl;
        func[i].getSalarioAnual(z);
    }
    
    

    return 0;
}