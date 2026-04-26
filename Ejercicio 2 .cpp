#include <iostream>
using namespace std;

int main()
{
    int  n = 1, puntos = 0, i = 0;

    while(n != 0)
    {
        cout << "Coloque un numero" << endl;
        cin >> n;
        if(n == 1)
        {
            puntos = 0;
            n = 0;
            i = 1;
            cout << "PERDIO todos sus puntos" << endl; 
            cout << "Game over" << endl; 
        }
        else if(2<= n && n <= 6)
        {
            puntos = puntos + n;
            cout << "Acumulado: " << puntos << endl;
        }
        else if(n != 0)
        {
            cout << "Coloque un numero entre 1 y 6" << endl;
        }
        else
        {
            cout << "El juego ha terminado" << endl;
        }
       

    }
    
    if(i != 1)
    {
        cout << "Sus puntos totales son: " << puntos;
    }
    
}