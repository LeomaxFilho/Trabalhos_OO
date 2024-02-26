#include <iostream>
#include "Restaurante.h"

using namespace std;

// numero(num), desc(des), quant(q), preco(pre)

void MesaDeRestaurante::adicionarPedido(Pedido p){
        int end;
        for (Pedido& pedido : pedidos)
        {
            if (p.getNumero() == pedido.getNumero())
            {
                Pedido d(pedido.getNumero(), pedido.getDesc(), pedido.getQuant() + p.getQuant(), pedido.getPreco());
                pedido = d;
            }else{
                pedidos[end] = p;
        end ++;
            }
            
        }
        
    }


    /*
    void adicionarPedido(Pedido p) {
        
        for (Pedido& pedido : pedidos) {
            Pedido g;
            if (pedido.getNumero() == p.getNumero()) {
                pedido(pedido.getNumero(),pedido.getDescricao(), pedido.getQuantidade() + p.getQuantidade(), pedido.getPreco());
                return;
            }
        }
        pedidos[numPedidos++] = p;
    }

    */