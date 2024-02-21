#include <iostream>
#include "FiguraGeometrica.h"

using namespace std;


int main (){

    int tipo;

    FiguraGeometrica *geo;


    do
    {
        cin >> tipo;

        if (tipo == 1)
        {
            geo =  new Quadrado();
            
        }else if (tipo == 2)
        {
            geo =  new Retangulo();

        }else if (tipo == 3)
        {
            geo =  new Triangulo();

        }else if (tipo == 4)
        {
            geo =  new Circulo();

        }else
        {
            break;
        }

        geo->lerAtributosArea();
        cout << geo->getNome() << " polimórfico de área "<< geo->calcularArea()<< endl;

    } while (tipo != 0);
    
    



    return 0;
}