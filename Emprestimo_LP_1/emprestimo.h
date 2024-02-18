#include <iostream>
using namespace std;

#pragma once

class Emprestimo{

private:

 float salario, valor, prestacoes;

public:
    Emprestimo(float d, float m, float a) : salario(d), valor(m), prestacoes(a) {
        
    }

    void getemprestimo(float d, float m, float a){
        salario = d;
        valor = m;
        prestacoes = a;
    }

    void proporcao(){

        float s = (valor/prestacoes)/salario;

        cout << "valor :"<< valor << endl;
        cout << "prestacoes :"<<prestacoes << endl;
        cout << "salario :"<< salario << endl;
        cout << "----";
        cout << "proporcao :"<< s << endl;
    }
    
};
