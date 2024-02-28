#include "Pessoa.h"
#include <iostream>

using namespace std;

Pessoa::Pessoa(int ti, std::string n, std::string c, std::string t) {
    tipo = ti;
    nome = n;
    cpf = c;
    tel = t;
}

void Pessoa::exibir() {
    cout << nome << " - " << tel << " - CPF: " << cpf << endl;
}
void Pessoa::salvar(fstream &fp){

    fp << nome << "\n" << tel << "\n" << cpf;
}

void Pessoa::set(fstream &fp){
    string g;

    while (getline(fp, g))
    {
        fp >> nome;
        fp >> tel;
        fp >> cpf;
        cout << "lendo";

    } 
    
    

}