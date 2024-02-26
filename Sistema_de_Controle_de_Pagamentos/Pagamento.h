#include <iostream>
#include <string>
using namespace std;

class Pagamento
{
private:
    float valorPagamento;
    string nomeDoFuncionario;

public:
    Pagamento() : valorPagamento(0){}

    void setValorPagamento(float a){

        valorPagamento = a;
    }

    void setNomeDoFuncionario(string n){

        nomeDoFuncionario = n;
    }

    float getValorPagamento(){

        return valorPagamento;
    }

    string getNomeDoFuncionario(){

        return nomeDoFuncionario;
    }
};

/*-------------------------------------------------------------------------------*/

class ControleDePagamentos : public Pagamento
{
private:
    Pagamento pagamentos[100];

public:

    void setPagamentos(Pagamento p, int index){

        pagamentos[index] = p;
    }

    Pagamento getPagamento(int pos){

        return pagamentos[pos];
    }

    float calculaTotalDePagamentos(){

        float i = 0;

        for (Pagamento& pagament : pagamentos)
        {
            
            Pagamento p = pagament;
            i += p.getValorPagamento();
        }
        return i;
    }

    int getIndexFuncionario(string nomeFuncionario){

        int test = 0;
        int index = 0;

        for (Pagamento& pagament : pagamentos)
        {
            
            if (pagament.getNomeDoFuncionario().find(nomeFuncionario) != string::npos)
            {
                return index;
            }else{

                index++;
            }
            
            test++;
        }
        if (test == index)
        {
            return -1;
        }
        return 0;
    }

};