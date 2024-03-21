#include <iostream>
#include <string>

using namespace std;

class Conta{
protected:
    string nome;
    int numero;
    double saldo = 0;
public:
    Conta(string nom, int num) : nome(nom), numero(num){}
    virtual string getnome() = 0;
    virtual int getnumero() = 0;
    virtual double getsaldo() = 0;

    virtual void setnome() = 0;
    virtual void setnumero() = 0;
    virtual void setsaldo() = 0;
    virtual void sacar(double) = 0;
    virtual void depositar(int) = 0;
    virtual double definirLimite(){}
};

class ContaCorrente : public Conta {
protected:
    double salario;
    int limite;
public:
    ContaCorrente(double sal, string nom, int num) : salario(sal), Conta(nom, num){}
    string getnome() { return nome; }
    int getnumero() { return numero; }
    double getsaldo() { return saldo; }
    double getsalario() { return salario;}

    void setsalario(){ cin >> salario;}
    void setnome() { cin >> nome;}
    void setnumero() { cin >> numero;}
    void setsaldo() { cin >> saldo;}
    void depositar(int dep) { saldo += dep; }
    void sacar(double sac) {
        if (sac > limite) {cout << "saldo insuficiente" << endl << "saldo disponivel" << limite << endl;}
        else {limite -= sac;}
    }
    double definirLimite(){
        limite += saldo;
        limite = salario * 2;
        return salario * 2;
    }
};
class Poupanca : public Conta
{
private:
    int variacao;
    double taxaRendimento = 0.006;
public:
    Poupanca(string nom, int num) : Conta(nom, num) {}
    string getnome() { return nome; }
    int getnumero() { return numero; }
    double getsaldo() { return saldo; }

    void setnome() { cin >> nome;}
    void setnumero() { cin >> numero;}
    void setsaldo() { cin >> saldo;}
    void depositar(int dep) { saldo += dep; }
    void sacar(double sac) {
        if (sac > saldo) {cout << "saldo insuficiente" << endl << "saldo disponivel " << saldo << endl;}
        else {saldo -= sac;}
    }
    double render(){
        saldo += saldo * taxaRendimento;
        return taxaRendimento;
    }

};

class ContaEspecial : public ContaCorrente
{
private:
public:
    ContaEspecial(double sal, string nom, int num) : ContaCorrente(sal,nom, num){}
    string getnome() { return nome; }
    int getnumero() { return numero; }
    double getsaldo() { return saldo; }
    double getsalario() { return salario;}

    void setsalario(){ cin >> salario;}
    void setnome() { cin >> nome;}
    void setnumero() { cin >> numero;}
    void setsaldo() { cin >> saldo;}
    void depositar(int dep) { saldo += dep; }
    void sacar(double sac) {
        if (sac > limite) {cout << "saldo insuficiente" << endl << "saldo disponivel" << limite << endl;}
        else {limite -= sac;}
    }
    double definirLimite() {
        limite += saldo;
        limite = salario * 4;
        return salario * 4;
    }
};

int main(){
    Conta *conta;
    string nome;
    int numero;
    double salario;

    for (int i = 0; i < 3; i++)
    {
        int x;
        if (i == 0)
        {
            getline(cin, nome);
            cin >> numero;
            cin >> salario;
            conta = new ContaCorrente(salario, nome, numero);
            cin >> x;
            conta->depositar(x);
            conta->definirLimite();
            cin >> x;
            conta->sacar(x);
            cout << conta->getnome() << ", cc: "<< conta->getnumero() << ", salário " << salario << ", saldo total disponível: R$" << conta->definirLimite();
        }else if (i == 1)
        {
            getline(cin, nome);
            cin >> numero;
            cin >> salario;
            conta = new ContaEspecial(salario, nome, numero);
            cin >> x;
            conta->depositar(x);
            conta->definirLimite();
            cin >> x;
            conta->sacar(x);
        }else if (i == 2)
        {
            getline(cin, nome);
            cin >> numero;
            conta = new Poupanca(nome, numero);
            cin >> x;
            conta->depositar(x);
            cin >> x;
            conta->sacar(x);
        }
    }

    return 0;
}