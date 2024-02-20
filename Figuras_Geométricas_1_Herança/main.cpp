#include <iostream>
#include "FiguraGeometrica.h"

using namespace std;

int main (){
    int tipo;


    do
    {
        cin >> tipo;

        if (tipo == 1)
        {
            float lado;
            cin >> lado;
            Quadrado q;
            q.lerAtributosArea(lado);
            cout << q.getNome() << " de área "<< q.calcularArea()<< endl;
            
            
        }else if (tipo == 2)
        {
            float lado1, lado2;
            cin >> lado1;
            cin >> lado2;
            Retangulo q;
            q.lerAtributosArea(lado1, lado2);
            cout << q.getNome() << " de área "<< q.calcularArea()<< endl; 

        }else if (tipo == 3)
        {
            float lado1, lado2;
            cin >> lado1;
            cin >> lado2;
            Triangulo q;
            q.lerAtributosArea(lado1, lado2);
            cout << q.getNome() << " de área "<< q.calcularArea()<< endl;

        }else if (tipo == 4)
        {
            float lado1;
            cin >> lado1;
            Circulo q;
            q.lerAtributosArea(lado1);
            cout << q.getNome() << " de área "<< q.calcularArea()<< endl;
        }else
        {
            break;
        }
        
    } while (tipo != 0);
    



    return 0;
}