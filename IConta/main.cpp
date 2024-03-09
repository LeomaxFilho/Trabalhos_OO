    #include <iostream>
    #include <string>

    using namespace std;

    class iConta
    {
    public:
        virtual void saldoTotalDisponivel(void) = 0;
        virtual void sacar(float valor) = 0;
        virtual void depositar(int valor) = 0;
    };

    class Conta : public iConta
    {
    protected:
        string nomeCliente;
        int numConta;
        float salarioMensal;
        float saldo;
        float limite = 0;

    public:
        ~Conta(){}

        Conta(string n, int nc, float sm ) :  nomeCliente(n), numConta(nc), salarioMensal(sm), saldo(0) {
        }

        virtual void definirLimite(){
            limite += (2*salarioMensal);
            saldo += limite;
            
        }
        void saldoTotalDisponivel(void){
            cout << saldo;

        }

        string getNome(){
            return nomeCliente;

        }
        float getSaldo(){
            return saldo;

        }

        int getnumConta(){
            return numConta;

        }

        float getsalarioMensal(){
            return salarioMensal;

        }

        float conta(){
            return numConta;
        }
        
        void sacar(float s){
            saldo -= s;
        }

        void depositar(int d){
            saldo += d;
        }


    };

    class ContaEspecial : public Conta
    {
    private:
        
    public:
        ContaEspecial(string n, int nc, float sm ) :  Conta( n,  nc,  sm ) {}

        void definirLimite(){
            limite += (3*salarioMensal);
            saldo += limite;
            
        }

    };

    int main(){
        Conta *conta;

        for (int i = 0; i < 2; i++)
        {
            string nome;
            int nconta;
            int salario;
            float deposito;
            float saque;

            getline(cin, nome);
            cin >> nconta;
            cin >> salario;
            cin >> deposito;
            cin >> saque;
            cin.ignore();

            

            if (i == 0)
            {
                conta = new Conta(nome, nconta, salario);
                
            }else{
                conta = new ContaEspecial(nome, nconta, salario);
            }

            conta->sacar(saque);
            conta->depositar(deposito);
            conta->definirLimite();
            cout << conta->getNome() << ", cc: " << conta->getnumConta() << ", salário "<<conta->getsalarioMensal() << ", saldo total disponível: R$ "<<conta->getSaldo()  << endl;

        }

        return 0;
    }