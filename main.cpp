#include <iostream>
#include <string>

using namespace std;

class Funcionario
{
protected:
    string nome;
    int matricula;

public:
virtual double calculaSalario() = 0;

virtual string getNome() = 0;
virtual int getMatricula() = 0;
virtual void setNome() = 0;
virtual void setMatricula() = 0;
};

class Assalariado : public Funcionario
{
private:
    double salario;
public:
double calculaSalario(){
    cin >> salario;
    return salario;
}
virtual string getNome(){
    return nome;
}
virtual int getMatricula() {
    return matricula;
}
virtual void setNome() {
    getline(cin, nome);
}
virtual void setMatricula() {
    cin >> matricula;
    cin.ignore();
}
};

class Horista : public Funcionario
{
private:
    double salarioPorHora;
    double horasTrabalhadas;
public:
double calculaSalario(){
    cin >> salarioPorHora;
    cin >> horasTrabalhadas;
    int extras;

    if (horasTrabalhadas > 40)
    {
        extras = 1.5*(horasTrabalhadas - 40)*salarioPorHora;
        return ((40 * salarioPorHora) + extras) * 4;
    }else
    return salarioPorHora * horasTrabalhadas * 4;
}
virtual string getNome(){
    return nome;
}
virtual int getMatricula() {
    return matricula;
}
virtual void setNome() {
    getline(cin, nome);
}
virtual void setMatricula() {
    cin >> matricula;
    cin.ignore();
}
};
class Comissionado : public Funcionario
{
private:
    double vendasMensais;
    double percentualComissao;
public:
double calculaSalario(){
    cin >> vendasMensais;
    cin >> percentualComissao;
    return vendasMensais * percentualComissao;
}
virtual string getNome(){
    return nome;
}
virtual int getMatricula() {
    return matricula;
}
virtual void setNome() {
    getline(cin, nome);
}
virtual void setMatricula() {
    cin >> matricula;
    cin.ignore();
}
};
class SistemaGerenciaFolha
{
private:
    Funcionario *funcionario[3];
    double orcmax;
public:
SistemaGerenciaFolha(double max) : orcmax(max) {}

void setFuncionarios(Funcionario *func, int i){
    funcionario[i] = func;
}
double calculaVetorTotalFolha(){
    double tot;
    for (int i = 0; i < 3; i++)
    {
        tot += funcionario[i]->calculaSalario();
    }
    if (tot > orcmax)
    {
        cout << "OrcamentoEstouradoException " << tot;
    }else
    cout << tot;
}
void consultaSalarioFuncionario(string nome)
{
    for (int i = 0; i < 3; i++)
    {
        if (nome == funcionario[i]->getNome())
        {
            cout << funcionario[i]->calculaSalario() << endl;
            return;
        }
    }
    cout << "FuncionarioNaoExisteException " << nome << endl;
}
};


int main()
{
    Funcionario *func;
    double orcmax;
    cin >> orcmax;
    cin.ignore();
    SistemaGerenciaFolha sys(orcmax);

    for (int i = 0; i < 3; i++)
    {
        switch (i)
        {
        case 0:
            func = new Assalariado();
            func->setNome();
            func->setMatricula();
            func->calculaSalario();
            sys.setFuncionarios(func,i);
            break;
        case 1:
            func = new Horista();
            func->setNome();
            func->setMatricula();
            func->calculaSalario();
            sys.setFuncionarios(func,i);
            break;
        case 2:
            func = new Comissionado();
            func->setNome();
            func->setMatricula();
            func->calculaSalario();
            sys.setFuncionarios(func,i);
            break;
        default:
            break;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        string name;
        getline(cin, name);
        sys.consultaSalarioFuncionario(name);
    }
    //sys.calculaVetorTotalFolha();
    
    return 0;
}

