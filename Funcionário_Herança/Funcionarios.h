#include <iostream>
#include <string>

using namespace std;

#pragma once

class Funcionarios
{
protected:
    float salario;
    int matricula;
    string nome;
public:
    Funcionarios() : matricula(0), salario(0){}

    void setSalario(float s){

        salario = s;
    }
    void setMatricula(int mat){

        matricula = mat;
    }
    void setNome(string n){

        nome = n;
    }

    float getSalario(){
        return salario;

    }
    int getMatricula(){
        return matricula;

    }
    string getNome(){
        return nome;
    }

};

class Consultor : public Funcionarios
{
private:
    
public:
    Consultor() : Funcionarios(){}

    float getSalario(){
        return 1.1*salario;
    }
    /*
    float getSalario(float percent){
        percent += 1;
        return salario*percent;
    }
    */
};