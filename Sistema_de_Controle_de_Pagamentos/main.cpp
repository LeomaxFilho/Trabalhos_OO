#include <iostream>
#include <string>
#include "Pagamento.h"
using namespace std;



int main(){

    int count;
    cin >> count;

    ControleDePagamentos control;

    for (int i = 0; i < count; i++)
    {
        float t;
        cin >> t;
        cin.ignore();

        string a;
        getline(cin, a);

        Pagamento p;

        p.setNomeDoFuncionario(a);
        p.setValorPagamento(t);

        control.setPagamentos(p, i); 

    }
    
    string exibir = "";
    cin >> exibir;

    if (exibir != "")
    {
        Pagamento p = control.getPagamento(control.getIndexFuncionario(exibir));
        if (p.getNomeDoFuncionario() != "")
        {
            cout << p.getNomeDoFuncionario() << ": R$ " << p.getValorPagamento() << endl;
        }else{
        cout << exibir << " não encontrado(a).\n";
        }
        
    }

    cout << "Total: R$ " << control.calculaTotalDePagamentos();
    

    return 0;
}