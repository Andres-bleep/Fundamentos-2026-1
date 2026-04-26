#include <iostream>
using namespace std;

int main()
{
    int filas = 0 ,impar = 1;
    cout << "Ingrese el valor de las filas (entre 1 y 9): ";
    cin >> filas;

    if(filas < 1 || filas > 9)
    {
        cout << "Valor fuera de limites";
      
    }
    for(int m=0; m < filas ; m++)
    {
        for(int j=0; j <=m ;j++)
        {
            cout << impar << " ";
            impar = impar + 2;
        }
        cout << endl;
    }
}