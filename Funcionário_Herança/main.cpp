#include <iostream>
#include <string>
#include "Funcionarios.h"

using namespace std;


int main(){

    float salario;
    int matricula;
    string nome;

    Funcionarios funcionario;
    Consultor consultor;

    for (int i = 0; i < 2; i++)
    {
        cin >> matricula;
        cin.ignore();

        getline(cin, nome);
        cin >> salario;
        if (i == 0)
        {
            funcionario.setMatricula(matricula);
            funcionario.setNome(nome);
            funcionario.setSalario(salario);
            cout << funcionario.getMatricula() << " - " << funcionario.getNome() << " - R$ " << funcionario.getSalario() << endl;
        }else{
            consultor.setMatricula(matricula);
            consultor.setNome(nome);
            consultor.setSalario(salario);
            cout << consultor.getMatricula() << " - " << consultor.getNome() << " - R$ " << consultor.getSalario() << endl;
        }
        
    }

    return 0;
}