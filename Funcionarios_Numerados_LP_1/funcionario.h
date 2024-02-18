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
    }
    void setname2(string b){
        nome2 = b;
    }
    void setSalario(int s){

        if (s < 0)
        {
            salario = 0;
        }else{

        salario = s;

        }
        
    }
    float getSalario();

    void getSalarioAnual(float z){

        z += 1;
        cout << z * salarioAnual() << endl;

    }
    float salarioAnual(){
        return salario * 12;
    }
};

float Funcionario::getSalario(){

    return salario;

}
