#include <iostream>

using namespace std;

int main(){
    int count;
    int n = 0;
    bool flag;

    cin >> n;

    int count2 = count;
    int vetor[100];
    
    for (int i = 0; i < n; i++)
    {
        cin >> vetor[i];
    }

    // verifica se ha repeticoes

    for (int i = 0; i < n; ++i) {

        flag = false;

        for (int j = 0; j < i; j++) {

            if (vetor[i] == vetor[j])
            {
                flag = true;
                break;
            }
            
            
            
        }
        if (flag == false)
            {
                cout << vetor[i] << " ";
            
            }
    }
    

    
    cin >> n;
    return 0;
}

/*    


    for (int i = 0; i < count; i++)
    {
        saida[i] = 0;
    }


for (int i = 0; i < n; i++)
    {
        //cout << i << endl;
        cout << saida[i] << " - ";
    }

*/