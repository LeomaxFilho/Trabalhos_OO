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
     void showdata(int z){
        
        
        if (mes == 1)
        {
            if ((dia + z) > 31)
            {
                if (mes + 1 > 12)
                {
                        std:: cout << "0" << ((dia + z) - 31) << "/" << "0" << mes - 11 << "/"<< ano + 1;
                }else{
                    
                    if (((dia + z) - 31) < 10)
                    {
                        std:: cout << "0" << ((dia + z) - 31) << "/" << "0" << mes + 1 << "/"<< ano;
                    }else{
                    
                    std:: cout << ((dia + z) - 31) << "/" << "0" << mes + 1 << "/"<< ano;

                    }
                }
            }else{
                if (dia < 10)
                {
                    std:: cout << "0" << dia << "/" << "0" << mes << "/"<< ano;
                }else{
                    
                    std:: cout << dia<< "/" << "0" << mes << "/"<< ano;

                }
                
            }
        }
        if (mes == 2)
        {
            if (dia > 28)
            {   
                std::cout << "Atributo dia Inválido \n";
                dia -= 28;
            }
            
            if ((dia + z) > 28)
            {
                if (mes + 1 > 12)
                {
                        std:: cout << "0" << ((dia + z) - 28) << "/" << "0" << mes - 11 << "/"<< ano + 1;
                }else{
                    
                    if (((dia + z) - 28) < 10)
                    {
                        std:: cout << "0" << ((dia + z) - 28) << "/" << "0" << mes + 1 << "/"<< ano;
                    }else{
                    
                    std:: cout << ((dia + z) - 28) << "/" << "0" << mes + 1 << "/"<< ano;

                    }
                }
            }else{
                if (dia < 10)
                {
                    std:: cout << "0" << dia << "/" << "0" << mes << "/"<< ano;
                }else{
                    
                    std:: cout << dia<< "/" << "0" << mes << "/"<< ano;

                }
                
            }
            
        }

        if (mes == 3)
        {
            if ((dia + z) > 31)
            {
                if (mes + 1 > 12)
                {
                        std:: cout << "0" << ((dia + z) - 31) << "/" << "0" << mes - 11 << "/"<< ano + 1;
                }else{
                    
                    if (((dia + z) - 31) < 10)
                    {
                        std:: cout << "0" << ((dia + z) - 31) << "/" << "0" << mes + 1 << "/"<< ano;
                    }else{
                    
                    std:: cout << ((dia + z) - 31) << "/" << "0" << mes + 1 << "/"<< ano;

                    }
                }
            }else{
                if (dia < 10)
                {
                    std:: cout << "0" << dia << "/" << "0" << mes << "/"<< ano;
                }else{
                    
                    std:: cout << dia<< "/" << "0" << mes << "/"<< ano;

                }
                
            }
        }
        if (mes == 4)
        {
            if ((dia + z) > 30)
            {
                if (mes + 1 > 12)
                {
                        std:: cout << "0" << ((dia + z) - 30) << "/" << "0" << mes - 11 << "/"<< ano + 1;
                }else{
                    
                    if (((dia + z) - 30) < 10)
                    {
                        std:: cout << "0" << ((dia + z) - 30) << "/" << "0" << mes + 1 << "/"<< ano;
                    }else{
                    
                    std:: cout << ((dia + z) - 30) << "/" << "0" << mes + 1 << "/"<< ano;

                    }
                }
            }else{
                if (dia < 10)
                {
                    std:: cout << "0" << dia << "/" << "0" << mes << "/"<< ano;
                }else{
                    
                    std:: cout << dia<< "/" << "0" << mes << "/"<< ano;

                }
                
            }
        }
        if (mes == 5)
        {
            if ((dia + z) > 31)
            {
                if (mes + 1 > 12)
                {
                        std:: cout << "0" << ((dia + z) - 31) << "/" << "0" << mes - 11 << "/"<< ano + 1;
                }else{
                    
                    if (((dia + z) - 31) < 10)
                    {
                        std:: cout << "0" << ((dia + z) - 31) << "/" << "0" << mes + 1 << "/"<< ano;
                    }else{
                    
                    std:: cout << ((dia + z) - 31) << "/" << "0" << mes + 1 << "/"<< ano;

                    }
                }
            }else{
                if (dia < 10)
                {
                    std:: cout << "0" << dia << "/" << "0" << mes << "/"<< ano;
                }else{
                    
                    std:: cout << dia<< "/" << "0" << mes << "/"<< ano;

                }
                
            }
        }
        if (mes == 6)
        {
            if ((dia + z) > 30)
            {
                if (mes + 1 > 12)
                {
                        std:: cout << "0" << ((dia + z) - 30) << "/" << "0" << mes - 11 << "/"<< ano + 1;
                }else{
                    
                    if (((dia + z) - 30) < 10)
                    {
                        std:: cout << "0" << ((dia + z) - 30) << "/" << "0" << mes + 1 << "/"<< ano;
                    }else{
                    
                    std:: cout << ((dia + z) - 30) << "/" << "0" << mes + 1 << "/"<< ano;

                    }
                }
            }else{
                if (dia < 10)
                {
                    std:: cout << "0" << dia << "/" << "0" << mes << "/"<< ano;
                }else{
                    
                    std:: cout << dia<< "/" << "0" << mes << "/"<< ano;

                }
                
            }
        }
        if (mes == 7)
        {
           if ((dia + z) > 31)
            {
                if (mes + 1 > 12)
                {
                        std:: cout << "0" << ((dia + z) - 31) << "/" << "0" << mes - 11 << "/"<< ano + 1;
                }else{
                    
                    if (((dia + z) - 31) < 10)
                    {
                        std:: cout << "0" << ((dia + z) - 31) << "/" << "0" << mes + 1 << "/"<< ano;
                    }else{
                    
                    std:: cout << ((dia + z) - 31) << "/" << "0" << mes + 1 << "/"<< ano;

                    }
                }
            }else{
                if (dia < 10)
                {
                    std:: cout << "0" << dia << "/" << "0" << mes << "/"<< ano;
                }else{
                    
                    std:: cout << dia<< "/" << "0" << mes << "/"<< ano;

                }
                
            }
        }
        if (mes == 8)
        {
            if ((dia + z) > 31)
            {
                if (mes + 1 > 12)
                {
                        std:: cout << "0" << ((dia + z) - 31) << "/" << "0" << mes - 11 << "/"<< ano + 1;
                }else{
                    
                    if (((dia + z) - 31) < 10)
                    {
                        std:: cout << "0" << ((dia + z) - 31) << "/" << "0" << mes + 1 << "/"<< ano;
                    }else{
                    
                    std:: cout << ((dia + z) - 31) << "/" << "0" << mes + 1 << "/"<< ano;

                    }
                }
            }else{
                if (dia < 10)
                {
                    std:: cout << "0" << dia << "/" << "0" << mes << "/"<< ano;
                }else{
                    
                    std:: cout << dia<< "/" << "0" << mes << "/"<< ano;

                }
                
            }
        }
        if (mes == 9)
        {
            if ((dia + z) > 30)
            {
                if (mes + 1 > 12)
                {
                        std:: cout << "0" << ((dia + z) - 30) << "/" << "0" << mes - 11 << "/"<< ano + 1;
                }else{
                    
                    if (((dia + z) - 30) < 10)
                    {
                        std:: cout << "0" << ((dia + z) - 30) << "/" << "0" << mes + 1 << "/"<< ano;
                    }else{
                    
                    std:: cout << ((dia + z) - 30) << "/" << "0" << mes + 1 << "/"<< ano;

                    }
                }
            }else{
                if (dia < 10)
                {
                    std:: cout << "0" << dia << "/" << "0" << mes << "/"<< ano;
                }else{
                    
                    std:: cout << dia<< "/" << "0" << mes << "/"<< ano;

                }
                
            }
        }
        if (mes == 10)
        {
            if ((dia + z) > 31)
            {
                if (mes + 1 > 12)
                {
                        std:: cout << "0" << ((dia + z) - 31) << "/" << "0" << mes - 11 << "/"<< ano + 1;
                }else{
                    
                    if (((dia + z) - 31) < 10)
                    {
                        std:: cout << "0" << ((dia + z) - 31) << "/" << "0" << mes + 1 << "/"<< ano;
                    }else{
                    
                    std:: cout << ((dia + z) - 31) << "/" << "0" << mes + 1 << "/"<< ano;

                    }
                }
            }else{
                if (dia < 10)
                {
                    std:: cout << "0" << dia << "/" << "0" << mes << "/"<< ano;
                }else{
                    
                    std:: cout << dia<< "/" << "0" << mes << "/"<< ano;

                }
                
            }
        }
        if (mes == 11)
        {
            if ((dia + z) > 30)
            {
                if (mes + 1 > 12)
                {
                        std:: cout << "0" << ((dia + z) - 30) << "/" << "0" << mes - 11 << "/"<< ano + 1;
                }else{
                    
                    if (((dia + z) - 30) < 10)
                    {
                        std:: cout << "0" << ((dia + z) - 30) << "/" << "0" << mes + 1 << "/"<< ano;
                    }else{
                    
                    std:: cout << ((dia + z) - 30) << "/" << "0" << mes + 1 << "/"<< ano;

                    }
                }
            }else{
                if (dia < 10)
                {
                    std:: cout << "0" << dia << "/" << "0" << mes << "/"<< ano;
                }else{
                    
                    std:: cout << dia<< "/" << "0" << mes << "/"<< ano;

                }
                
            }
        }
        if (mes == 12)
        {

            if ((dia + z) > 31)
            {
                if (mes + 1 > 12)
                {
                        std:: cout << "0" << ((dia + z) - 31) << "/" << "0" << mes - 11 << "/"<< ano + 1;
                }else{
                    
                    if (((dia + z) - 31) < 10)
                    {
                        std:: cout << "0" << ((dia + z) - 31) << "/" << "0" << mes + 1 << "/"<< ano;
                    }else{
                    
                    std:: cout << ((dia + z) - 31) << "/" << "0" << mes + 1 << "/"<< ano;

                    }
                }
            }else{
                if (dia < 10)
                {
                    std:: cout << "0" << dia << "/" << "0" << mes << "/"<< ano;
                }else{
                    
                    std:: cout << dia<< "/" << "0" << mes << "/"<< ano;

                }
                
            }
        }
        if (mes > 12 || mes < 1)
        {
            std:: cout << "Atributo mês Inválido" << std::endl;
            mes = 1;

            if ((dia + z) > 31)
            {
                if (mes + 1 > 12)
                {
                        std:: cout << "0" << ((dia + z) - 31) << "/" << "0" << mes - 11 << "/"<< ano + 1;
                }else{
                    
                    if (((dia + z) - 31) < 10)
                    {
                        std:: cout << "0" << ((dia + z) - 31) << "/" << "0" << mes + 1 << "/"<< ano;
                    }else{
                    
                    std:: cout << ((dia + z) - 31) << "/" << "0" << mes + 1 << "/"<< ano;

                    }
                }
            }else{
                if (dia < 10)
                {
                    std:: cout << "0" << dia + z << "/" << "0" << mes << "/"<< ano;
                }else{
                    
                    std:: cout << dia + z << "/" << "0" << mes << "/"<< ano;

                }
            }
        }
    }
    
};