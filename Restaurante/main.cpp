#include <iostream>
#include <string>

#include "Restaurante.h"

int main(){

    int indMesa;
    int numero;
    string desc;
    int quant;
    float preco;
    
    //Restaurante rest;
       
    

    do
    {
        cin >> indMesa;
        cin >> numero;
        cin.ignore();

        getline(cin, desc);
        cin >> quant;
        cin >> preco;
        Pedido p(indMesa, desc, quant, preco);
        rest.adicionarPedido(p, indMesa);

    } while (indMesa != -1);

    

    return 0;
}



