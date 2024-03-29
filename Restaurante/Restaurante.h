#include <iostream>

using namespace std;


class Pedido
{
private:
    int numero;
    string desc;
    int quant;
    float preco;

public:
    Pedido() : numero(0), desc(""), quant(0), preco(0){}

    Pedido(int num, string des, int q, float pre) : numero(num), desc(des), quant(q), preco(pre){}
    float getTotal(){

        return preco*quant;
    }
    int getNumero()
    {
        return numero;
    }

    string getDesc()
    {
        return desc;
    }

    int getQuant()
    {
        return quant;
    }

    float getPreco()
    {
        return preco;
    }

};

class MesaDeRestaurante
{
private:
    Pedido pedidos[100];
    
public:
    MesaDeRestaurante() {}

    void adicionarPedido(Pedido p)
    {

        int end = 0;

        for (Pedido& pedido : pedidos)
        {
                end ++;
        }
        
        for (Pedido& pedido : pedidos)
        {
            if (p.getNumero() == pedido.getNumero())
            {
                Pedido d(pedido.getNumero(), pedido.getDesc(), pedido.getQuant() + p.getQuant(), pedido.getPreco());
                pedido = d;
            }else if (p.getNumero() != pedido.getNumero())
            {
                pedidos[end+1] = p;
            }
        }
    }

    void zerarPedidos(){
        for (Pedido& pedido : pedidos)
        {
        Pedido p(0,"0",0,0);
        pedido = p;
        }
        
        
    }
    float calculaTotal(){

        float tot;

        for (Pedido& pedido : pedidos)
        {
            tot += pedido.getTotal();
            
        }
        return tot;
    }
    
    void exibeConta(){

        for (Pedido& pedido : pedidos)
        {

            cout << pedido.getNumero() << " - " << pedido.getDesc() << " - " << pedido.getQuant() << " - " << pedido.getPreco() << " - R$" << pedido.getTotal() << endl ;
        }
    }
};

class Restaurante
{
private:
    MesaDeRestaurante mesas[100];

public:
    Restaurante() {}

    void adicionarPedido(Pedido p, int indMesa){

        mesas[indMesa].adicionarPedido(p);
    }

    float calculaTotalRestaurante(){
        float tot = 0;
        for (MesaDeRestaurante& mes : mesas)
        {

            tot += mes.calculaTotal();
        }
        
        return tot;
    }

    void getMesa(int indMesa){
        
        mesas[indMesa].exibeConta();

    }
};