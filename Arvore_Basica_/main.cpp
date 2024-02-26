#include <iostream>

using namespace std;

int main(){

    int altura = 0;
    cin >> altura;
    string espacos = "";
    int qtdEspacos;
    int qtdSimbolo = 1;
    string simbolo = "";

    for (int i = 0; i < altura - 1; i++)
    {   

        qtdEspacos = altura - i;

        for (int j = 0; j < qtdEspacos - 1; j++)
        {
            espacos += " ";
        }

        for (int z = 1; z <= qtdSimbolo; z++)
        {
            simbolo += "*";
        }
        
        cout << espacos << simbolo << endl;

       qtdSimbolo += 2;
       espacos = "";
       simbolo = "";
       
    }
    

    return 0;
}