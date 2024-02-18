#include <iostream>
#include <string>
#include "Controle.h"

using namespace std;

int main(){

    int count;
    cin >> count;

    ControleDeGastos controle;

    for (int i = 0; i < count; i++)
    {
        // aqui eu crio uma variavel local chamda despesas onde eu vou armazenar no meu vetor controle de gastos os dados
        Despesa d;
        string nome, tipo;
        float valor;
        
        //aqui eu defino qual devem ser os valores respectivamente de cada informacao

        cin.ignore();
        getline(cin, nome);
        d.setNome(nome);
        
        cin >> valor;
        d.setValor(valor);

        cin >> tipo;
        d.setTipoDeGasto(tipo);
        

        controle.setDespesa(d, i);

    }

    string exibir;
    cin >> exibir;
    
    if (controle.existeDespesaDoTipo(exibir))
    {
        float tota = 0;
        for (int i = 0; i < count; i++)
        {
            
            Despesa d;
            d = controle.getDespesa(i);
            if (d.getTipoDeGasto() == exibir)
            {

                cout << d.getNome() << ", R$ "<< d.getValor() << endl;
                tota += d.getValor();

            }
            
            
        }
        cout << "Total: " << tota << "/" << controle.despesatotal();
    }else{ 
        float tota = 0;
        cout << "Nenhuma despesa do tipo especificado\n";
        cout << "Total: " << tota << "/" << controle.despesatotal();
    }

    return 0;
}