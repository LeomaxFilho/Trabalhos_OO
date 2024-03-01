#include <iostream>
#include <string>
#include "Imovel.h"

using namespace std;

int main(){
    int count;
    int tipo;

    Imovel *im;

    cin >> count;

    for (int i = 0; i < count; i++)
    {
        cin >> tipo;
        switch (tipo)
        {
        case 1 :
            im = new Casa();

            im->lerAtributos();
            im->exibirAtributos();
            break;

        case 2 :
            im = new Apartamento();

            im->lerAtributos();
            im->exibirAtributos();
            break;

        case 3:
            im = new Terreno();
            im->lerAtributos();
            im->exibirAtributos();
            break;
        
        default:
            break;
        }
    }
    return 0;
}