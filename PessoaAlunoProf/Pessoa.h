#pragma once
#include <string>
#include <fstream>

using namespace std;

class Pessoa
{
    public:
        Pessoa(int ti, std::string n, std::string c, std::string t);
        virtual void exibir();
        virtual void salvar(fstream &fp);
        virtual void set(fstream &fp);
        

    private:
        std::string nome;
        std::string cpf;
        std::string tel;
        int tipo;
};
