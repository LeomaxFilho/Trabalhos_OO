#include <iostream>
#include <string>

using namespace std;

#pragma once

class Funcionario
{

public:

    string nome1, nome2;
    float salario;

    void setname1(string a){
        nome1 = a;
        cout << nome1;
    }
    void setname2(string b){
        nome2 = b;
    }
    float getSalario();
};

float Funcionario::getSalario(){

    return salario * 12;
}