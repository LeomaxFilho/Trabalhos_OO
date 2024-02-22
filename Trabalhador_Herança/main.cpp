#include <iostream>
#include <string>
#include "Trabalhador.h"

using namespace std;

int main(){

    int count;
    cin >> count;

    int tipo;
    

    Trabalhador* trab;

    for (int i = 0; i < count; i++)
    {
        
        cin >> tipo;
        if (tipo == 1)
        {
            trab = new TrabalhadorAssalariado;
            trab->setNome();
            trab->calcularPagamentoSemanal();

        } else if (tipo == 2)
        {
            trab = new TrabalhadorPorHora;
            trab->setNome();
            trab->calcularPagamentoSemanal();
        }
        
        cout << trab->getNome() << " - Semanal: R$ " << trab->getSalario()/4 << " - Mensal: R$ " << trab->getSalario() << endl;
    }
    return 0;
}