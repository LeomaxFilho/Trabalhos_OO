#include <iostream>

using namespace std;

#pragma once

class FiguraGeometrica
{
protected:
    int tipo;
    
public:
    FiguraGeometrica(int a) : tipo(a){}

    float calcularArea(){

        float area;

        return area;
    }
    void lerAtributosArea(){

    }

    string getNome(){
        if (tipo == 1)
        {
            return "Quadrado";
        }else if (tipo == 2)
        {
            return "Retângulo";
        }else if (tipo == 3)
        {
            return "Triângulo";
        }else if (tipo == 4)
        {
            return "Circulo";
        }else
        {
            return "";
        }
        
    }
};
class Quadrado : public FiguraGeometrica
{
private:
    float lado;
    

public:
    Quadrado() : FiguraGeometrica(1){}

    float calcularArea(){

        return lado*lado;
    }

    void lerAtributosArea(float lado){

        this->lado = lado;
    }
};

class Retangulo : public FiguraGeometrica
{
private:
    float lado1,lado2;
    

public:
    Retangulo() : FiguraGeometrica(2){}

    float calcularArea(){

        return lado1*lado2;
    }

    void lerAtributosArea(float lado1, float lado2){

        this->lado1 = lado1 ;
        this->lado2 = lado2 ;
    }
};

class Triangulo : public FiguraGeometrica
{
private:
    float base, altura;
    

public:
    Triangulo() : FiguraGeometrica(3){}

    float calcularArea(){

        return (base*altura)/2;
    }
    
    void lerAtributosArea(float l, float a){

        base = l;
        altura  = a;
    }
};

class Circulo : public FiguraGeometrica
{
private:
    float raio;

public:
    Circulo() : FiguraGeometrica(4){}

    float calcularArea(){

        return raio*3.14*raio;
    }

    void lerAtributosArea(float lado){

        this->raio = lado;
    }
};
