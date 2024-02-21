#include <iostream>

using namespace std;

#pragma once

class FiguraGeometrica
{
protected:
    int tipo;
    
public:
    FiguraGeometrica(int a) : tipo(a){}

    float virtual calcularArea(){
        return 0;
    }
    void virtual lerAtributosArea(){
        
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
            return "Círculo";
        }else
        {
            return "";
        }
    }
};

class Quadrado : public virtual FiguraGeometrica
{
private:
    float lado;
    

public:
    Quadrado() : FiguraGeometrica(1){}

    float calcularArea(){

        return lado*lado;
    }

    void lerAtributosArea(){

        cin >> lado;
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

    void lerAtributosArea(){
        cin >> lado1;
        cin >> lado2;

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
    
    void lerAtributosArea(){

        cin >> base;
        cin >> altura;

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

    void lerAtributosArea(){

        cin >> raio;
    }
};