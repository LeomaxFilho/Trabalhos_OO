#include <iostream>
#include <string>
using namespace std;


#pragma once

class Despesa
{
private:
    string nome;
    float valor;
    string tipoDeGasto;

public:
    Despesa() : valor(0) {}

    void setNome(string nome) {
        this->nome = nome;
    }

    void setValor(float valor) {
        this->valor = valor;
    }

    void setTipoDeGasto(string tipo) {
        tipoDeGasto = tipo;
    }

    string getNome() const {
        return nome;
    }

    float getValor() const {
        return valor;
    }

    string getTipoDeGasto() const {
        return tipoDeGasto;
    }
};

class ControleDeGastos
{
private:
    Despesa despesas[100];

public:
    void setDespesa(Despesa d, int pos) {
        despesas[pos] = d;
    }

    Despesa getDespesa(int pos) {
        return despesas[pos];
    }

    float despesatotal()
    {
        float tot = 0;

        for (const Despesa& despesa : despesas) 
        {
            tot += despesa.getValor();
        }
        return tot;

    }

    bool existeDespesaDoTipo(string g){

        for (Despesa& despesa : despesas)
        {
            if (g == despesa.getTipoDeGasto())
            {
                return true;
            }
        }
        return false;
        
    }

};


