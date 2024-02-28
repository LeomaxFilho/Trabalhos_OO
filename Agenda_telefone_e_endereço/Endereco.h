#include <iostream>
#include <string>

using namespace std;

class Endereco {
private:
    string rua;
    int numero;
    string bairro;
    string cidade;
    string estado;
    string cep;

public:
    Endereco(string rua, int numero, string bairro, string cidade, string estado, string cep) {
        this->rua = rua;
        this->numero = numero;
        this->bairro = bairro;
        this->cidade = cidade;
        this->estado = estado;
        this->cep = cep;
    }

    string toString() {
        return  "\n" + rua + ", " + to_string(numero) + ", " + bairro + ". " + cidade + " - " + estado + ". CEP: " + cep;
    }
};

class Pessoa {
private:
    string nome;
    Endereco endereco;
    string telefone;

public:
    Pessoa(string n) : endereco("", 0, "", "", "", ""), nome(n), telefone("") {
    }

    Pessoa(string n, Endereco e, string t) : endereco(e), nome(n), telefone(t){
    }

    string getNome() {
        return nome;
    }

    Endereco getEndereco() {
        return endereco;
    }

    string getTelefone() {
        return telefone;
    }

    void setEndereco(Endereco endereco) {
        this->endereco = endereco;
    }

    void setTelefone(string telefone) {
        this->telefone = telefone;
    }

    string toString() {
        return nome + + ", " + telefone + " " + endereco.toString() + "\n";
    }
};