#include <iostream>
#include <string>
#include "Pessoa.h"
using namespace std;

int main() {
    
    Pessoa pessoa1, pessoa2;

    getline(cin, pessoa1.nome);
    cin >> pessoa1.idade;
    
    cin.ignore();
    getline(cin, pessoa1.telefone);
    
    getline(cin, pessoa2.nome);
    cin >> pessoa2.idade;
    cin.ignore();
    getline(cin, pessoa2.telefone);

    cout << pessoa1.nome << ", ";
    cout << pessoa1.idade << ", ";
    cout <<  pessoa1.telefone << endl;

    cout << pessoa2.nome<< ", ";
    cout << pessoa2.idade<< ", ";
    cout << pessoa2.telefone;

    return 0;
}