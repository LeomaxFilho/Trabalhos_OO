#include <iostream>
#include <string>
#include "Endereco.h"
using namespace std;


int main() {
    int numPessoas;
    cin >> numPessoas;
    cin.ignore();

    Pessoa agenda("");
    

    for (int i = 0; i < numPessoas; ++i) {
        string nome, rua, bairro, cidade, estado, cep, telefone;
        int numero;

        getline(cin, nome);
        getline(cin, telefone);
        getline(cin, rua);
        cin >> numero;
        cin.ignore();
        getline(cin, bairro);
        getline(cin, cidade);
        getline(cin, estado);
        getline(cin, cep);
        

        Endereco endereco(rua, numero, bairro, cidade, estado, cep);
        agenda = Pessoa(nome, endereco, telefone);

        cout << agenda.toString() << endl;
    }

    return 0;
}
