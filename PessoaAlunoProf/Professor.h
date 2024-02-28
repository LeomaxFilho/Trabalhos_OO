#pragma once
#include <string>
#include "Pessoa.h"

using namespace std;

class Professor : public Pessoa
{
    public:
        Professor(std::string n, std::string c, std::string t, std::string d);
        void exibir();
        void salvar(fstream &fp);

    private:
        std::string departamento;
};
