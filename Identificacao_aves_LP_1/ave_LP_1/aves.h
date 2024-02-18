#include <iostream>
using namespace std;

#pragma once

class Ave{

private:

 int aquatico, predador, domestico, voador, noturno;

public:
    Ave(int a, int b, int c, int d, int e) : aquatico(a), predador(b), domestico(c), voador(d), noturno(e) {
        
    }

    void getaves(int a, int b, int c, int d, int e){

        aquatico = a;
        predador = b;
        domestico = c;
        voador = d;
        noturno = e;
    }

    void resultado(){

        if (aquatico == 1)
        {
            if (predador == 1)
            {
                if (domestico == 1)
                {

                }else{

                    if (voador == 1)
                    {
                        if (noturno == 1)
                        {
                            cout << "garca";
                        }else{
                            cout << "gaivota";
                        }
                        
                    }else{
                        cout << "pinguim";
                    }
                    
                }
                
                
            }else{
                cout << "Pato";
            }
            
        }else{
            if (predador == 1)
            {
                if (domestico == 1)
                {
                    
                }else{
                    if (voador == 1)
                    {
                        if (noturno == 1)
                        {
                            cout << "coruja";
                        }else{
                            cout << "falcao";
                        }
                        
                    }else{
                        cout << "ema";
                    }
                    
                }
                
            }else{
                if (domestico == 1)
                {
                    cout <<"galinha";
                }else{
                    if (voador == 1)
                    {
                        cout << "pardal";
                    }else{
                        cout << "avestruz";
                    }
                    
                }
                
            }
            
        }
        


    }
    
};
