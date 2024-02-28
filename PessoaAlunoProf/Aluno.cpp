#include "Aluno.h"
#include <iostream>
using namespace std;

Aluno::Aluno(std::string n, std::string c, std::string t,
     float cr, int s) : Pessoa(1, n, c, t)
{
    CRA = cr;
    semestre = s;
}

void Aluno::exibir() {
    Pessoa::exibir();
    cout << "CRA: " << CRA << " - Semestre: " << semestre << endl;
}

void Aluno::salvar(fstream &fp){

    Pessoa::salvar(fp);
    fp << "\n" << CRA << "\n" << semestre << endl;
}