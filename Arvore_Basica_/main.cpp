#include <iostream>

using namespace std;

int main(){

    int altura = 0;
    cin >> altura;
    string espacos = "";
    int qtdEspacos;
    int qtdSimbolo = 1;
    string simbolo = "";

    for (int i = 1; i <= altura; i++)
    {   
        

        qtdEspacos = altura - i;

        for (int j = 1; j <= qtdEspacos; j++)
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