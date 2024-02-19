#include <iostream>
#include <string>
#include "Pessoa.h"

using namespace std;


int main(){

    std::string nome;
    std::string telefone;
    std::string cpf;
    float CRA;
    int semestre;
    int qtdDisciplinas;
    std::string departamento;

    std::getline(cin, nome);
    std::getline(cin, telefone);
    std::getline(cin, cpf);

    Pessoa ps(nome,telefone,cpf);
    ps.show();
    cout << endl;

    std::getline(cin, nome);
    std::getline(cin, telefone);
    std::getline(cin, cpf);
    std::cin >> CRA;
    std::cin >> semestre;
    std::cin.ignore();

    Aluno al(nome,telefone,cpf,CRA,semestre);
    al.show();
    cout << endl;

    std::getline(cin, nome);
    std::getline(cin, telefone);
    std::getline(cin, cpf);
    std::cin >> qtdDisciplinas;
    std:: cin.ignore();
    std:: getline(cin, departamento);

    Professor pf (nome,telefone,cpf, qtdDisciplinas,departamento);
    pf.show();

}