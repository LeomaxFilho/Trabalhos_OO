#include <iostream>
#include <string>

using namespace std;


class Pessoa
{
    protected:

        std::string nome;
        std::string telefone;
        std::string cpf;

    public:
        Pessoa(std::string a, std::string t, std::string c) : nome(a), telefone(t), cpf(c){
        }

        void getnome(std::string a){
            nome = a;
        }
        void gettelefone(std::string t){
            telefone = t;
        }
        void getcpf(std::string c){
            cpf = c;
        }

        void show(){
            cout << nome << " - " << telefone << " - CPF: " << cpf;

        }


};

class Aluno : public Pessoa{

    protected:

        float CRA;
        int semestre;

    public:

        Aluno(std::string a, std::string t, std::string c, float cr, int s) : Pessoa(a, t, c) , CRA(cr), semestre(s){
        }

    void getCRA(float cr){

        CRA = cr;

    }

    void getsemestre(int s){

        semestre = s;

    }
    void show(){
        Pessoa::show();
        cout << endl << "CRA: " << CRA << " - Semestre: " << semestre;

    }

};


class Professor : public Pessoa{

    protected:

        int qtdDisciplinas;
        std::string departamento;

    public:

        Professor(std::string a, std::string t, std::string c, int q, std::string d) : Pessoa(a, t, c) , qtdDisciplinas(q), departamento(d){
        }

        void getqtdDisciplinas(int q){

        qtdDisciplinas = q;

        }
        void getdepartamento(std::string d){

        departamento = d;

        }

        void show(){
        Pessoa::show();
        cout << endl << "Qtd: "  << qtdDisciplinas << " - " << departamento;
        }


};

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
