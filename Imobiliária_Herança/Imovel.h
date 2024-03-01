#include <iostream>
#include <string>

using namespace std;

#pragma once
class Imovel
{
protected:
    int tipo;
    float valor;
    string disponibilidade;

public:

    Imovel(int t) : tipo(t) {}

    void virtual lerAtributos(){
    }

    void virtual exibirAtributos(){
    }
};

class Casa : public Imovel
{
private:
    int numPav;
    int numQuartos;
    float areaTerreno;
    float areaConstruida;

public:
    Casa() : Imovel(1) {};

    void lerAtributos(){
        
        cin >> valor;
        cin >> disponibilidade;
        cin >> numPav;
        cin >> numQuartos;
        cin >> areaTerreno;
        cin >> areaConstruida ;

    }

    void exibirAtributos(){
        cout << "Casa para " << disponibilidade << ", R$ " << valor << ". ";
        cout << numPav << " pavimentos, " << numQuartos << " quartos, " << areaTerreno << "" << "m2 de área de terreno e " << areaConstruida << "m2 de área construída." << endl;

    }
};

class Apartamento : public Imovel
{
private:
    float area;
    int numQuartos;
    int andar;
    float valCondo;
    int numGaragem;

public:
    Apartamento() : Imovel(2) {}

    void lerAtributos(){
        
        cin >> valor;
        cin >> disponibilidade;
        cin >> area;
        cin >> numQuartos;
        cin >> andar;
        cin >> valCondo;
        cin >> numGaragem;

    }

    void exibirAtributos(){
        cout << "Apartamento para " << disponibilidade << ", R$ " << valor << ". ";
        cout << area << "m2 de área, " << numQuartos << " quartos, " << andar << " andar(es), " << valCondo << " de condomínio, " << numGaragem << " vaga(s) de garagem." << endl;

    }
};

class Terreno : public Imovel
{
private:
    float area;

public:
    Terreno() : Imovel(3) {}

    void lerAtributos(){
        cin >> valor;
        cin >> disponibilidade;
        cin >> area;

    }

    void exibirAtributos(){
        cout << "Terreno para " << disponibilidade << ", R$ " << valor << ". ";
        cout << area << "m2 de área de terreno." << endl;

    }
};