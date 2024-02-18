#include <string>
#include <iostream>
using namespace std;
#pragma once

class Estoque
{

public:

    int numero, quantidade;
    string descricao;
    float preco;

    Estoque(int a, string c, int b, float d) : numero(a), descricao(c), quantidade(b), preco(d){

    }

    void getestoque(int a, int b, string c, float d){

        int numero = a;
        int quantidade = b;
        string descricao = c;
        float preco = d;
        if (b <= 0)
        {
            b = 0;
        }
        if (d <= 0)
        {
            d = 0;
        }

    }

    float getInvoiceAmount(){

        return quantidade * preco;
    }

    void showestoque(){

        cout << numero << " - " << descricao << " - " << quantidade << " - " << preco << " - ";
    }

};