#include <iostream>

using namespace std;

#pragma once

class Trabalhador
{
protected:
    string nome;
    float salario;

public:
    Trabalhador() : salario(0), nome("-0-") {}

    void virtual calcularPagamentoSemanal(){

    }

    void setNome(){
        cin.ignore();
        getline(cin, nome);
    }
    void setSalario(float salario){
        cin >> salario;
    }
    string getNome(){
        return nome;
    }
    float getSalario(){
        return salario * 4;
    }
};

class TrabalhadorAssalariado : public virtual Trabalhador
{
public:
    TrabalhadorAssalariado() : Trabalhador(){}

    void calcularPagamentoSemanal(){
    
        cin >> salario;
        salario = salario/4;
        
    }
};

class TrabalhadorPorHora : public virtual Trabalhador
{
private:
    float valorDaHora;

public:
    TrabalhadorPorHora() : Trabalhador(){}

    void calcularPagamentoSemanal(){
        int horasSemanais;

        cin >> valorDaHora;
        cin >> horasSemanais;

        if (horasSemanais > 40)
        {
            float extra = (horasSemanais - 40)*(1.5)*valorDaHora;
            salario = extra + (valorDaHora*40);
        }else{
            salario = valorDaHora*horasSemanais;
        }
        
    }

};