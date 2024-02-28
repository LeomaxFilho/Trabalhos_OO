#pragma once
#include <string>
#include <fstream>

#include "Pessoa.h"
using namespace std;

class Aluno : public Pessoa
{
    public:
        Aluno(std::string n, std::string c, std::string t, float cr, int s);
        void exibir();
        void salvar(fstream &fp);

    private:
        float CRA;
        int semestre;
};
