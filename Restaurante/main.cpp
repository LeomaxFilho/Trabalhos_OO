#include <iostream>
#include <string>

#include "Restaurante.h"

int main(){

    int indMesa;
    int numero;
    string desc;
    int quant;
    float preco;
    
    Restaurante rest;
       
    do
    {
        cin >> numero;
        cin.ignore();

        getline(cin, desc);
        if (numero == -1){
            break;
        }
        cin >> quant;
        cin >> preco;
        cin >> indMesa;
        
        
        Pedido p(numero, desc, quant, preco);
        rest.adicionarPedido(p, indMesa);
        
    } while (numero != -1);
    
    rest.getMesa(1);

    return 0;
}


