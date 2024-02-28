#include <iostream>
#include <fstream>
#include "Professor.h"
#include "Aluno.h"

using namespace std;
int main() {

    fstream fp;
    fp.open("arq.txt", ios_base::in);

    Pessoa *lista[5];
    /*
    lista[0] = new Aluno("Joao", "534634645", "98888-8888", 8.3 , 6);
    lista[1] = new Professor("Kleber", "213123", "98888-8888", "info");
    lista[2] = new Aluno("Joao", "123", "98888-8888", 9.7 , 3);
    lista[3] = new Professor("Jorge", "1231434", "98888-8888","info");
    lista[4] = new Aluno("Joao", "64563453", "98888-8888", 9.2 , 3);
    */
    /*
    for (int i = 0; i < 5; i++)
    {
        lista[i]->salvar(fp);
    }
    */
    for (int i = 0; i < 5; i++)
    {
        lista[i]->set(fp);
    }
    for (int i = 0; i < 5; i++)
    {
        lista[i]->exibir();
    }

    return 0;
}
