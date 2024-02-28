#include "Professor.h"
#include <iostream>

using namespace std;

Professor::Professor(std::string n, std::string c, std::string t,std::string d) : Pessoa(2, n, c, t), departamento(d){}

void Professor::exibir() {
    Pessoa::exibir();
    cout <<  " - " << departamento << "\n";
}

void Professor::salvar(fstream &fp){

    Pessoa::salvar(fp);
    fp << "\n" << departamento << endl;
}