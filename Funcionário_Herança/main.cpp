#include <iostream>
#include <string>

using namespace std;

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
    float getSalario(float percent){
        percent += 1;
        return salario*percent;
    }
};

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
        cin >> matricula;
        if (i == 0)
        {
            funcionario.setMatricula(matricula);
            funcionario.setNome(nome);
            funcionario.setSalario(salario);
            cout << funcionario.getMatricula() << " - " << funcionario.getNome() << " - R$" << funcionario.getSalario() << endl;
        }else{
            consultor.setMatricula(matricula);
            consultor.setNome(nome);
            consultor.setSalario(salario);
            cout << consultor.getMatricula() << " - " << consultor.getNome() << " - R$" << consultor.getSalario() << endl;
        }
        
    }
    
    
    



    return 0;
}