#include <iostream>

#pragma once

class Data{

private:

 int dia, mes, ano;

public:
    Data(int d, int m, int a) : dia(d), mes(m), ano(a) {
        
    }

    void getdata(int d, int m, int a){
        dia = d;
        mes = m;
        ano = a;
    }
     void showdata(){
        if (mes == 1)
        {
            std::cout << dia << " de " << "Janeiro" << " de " << ano;
        }
        if (mes == 2)
        {
            std::cout << dia << " de " << "Fevereiro" << " de " << ano;
        }
        if (mes == 3)
        {
            std::cout << dia << " de " << "Marco" << " de " << ano;
        }
        if (mes == 4)
        {
            std::cout << dia << " de " << "Abril" << " de " << ano;
        }
        if (mes == 5)
        {
            std::cout << dia << " de " << "Maio" << " de " << ano;
        }
        if (mes == 6)
        {
            std::cout << dia << " de " << "Junho" << " de " << ano;
        }
        if (mes == 7)
        {
            std::cout << dia << " de " << "Julho" << " de " << ano;
        }
        if (mes == 8)
        {
            std::cout << dia << " de " << "Agosto" << " de " << ano;
        }
        if (mes == 9)
        {
            std::cout << dia << " de " << "Setembro" << " de " << ano;
        }
        if (mes == 10)
        {
            std::cout << dia << " de " << "Outubro" << " de " << ano;
        }
        if (mes == 11)
        {
            std::cout << dia << " de " << "Novembro" << " de " << ano;
        }
        if (mes == 12)
        {
            std::cout << dia << " de " << "Dezembro" << " de " << ano;
        }
        if (mes > 12 || mes < 1)
        {
            std::cout << dia << " de " << "Indefinido" << " de " << ano;
        }
        

        
        

    }
    
};