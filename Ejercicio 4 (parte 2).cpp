#include <iostream>

using namespace std;

bool esPerfecto(int numero)
{
    int suma = 0;
    for(int i = 1; i < numero; i++)
    {

        if (numero % i == 0)
        {
            suma += i;
        }
    }
    if (suma == numero)
    {
        return true;
    }
    return false;
}


int main()
{
    int i = 1;
    while(i != 0)
    {
        cout << "Ingrese un numero entero positivo: " << endl;
        cin >> i;

        if(i == 0)
        {
            break;
        }
        else if(i < 0)
        {
            i = 1;
            continue;
        }

        if(esPerfecto(i) == true)
        {
            cout << "El numero es perfecto" << endl;
        }
        else 
        {
            cout << "El numero NO es perfecto" << endl;
        }

    }
    cout << "Programa terminado";
}