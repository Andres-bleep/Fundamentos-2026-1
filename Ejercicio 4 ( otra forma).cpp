#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int n, z;
    string numero = "", base = "0123456789ABCDEF", X = "";
    int m;

    cout << "Ingrese el numero: ";
    cin >> n;
    z = n;
    m = n;

    if (n >= 1 && n <= 255)
    {

        
        int potencia = 1;
        while (potencia * 2 <= n)
        {
            potencia = potencia * 2;
        }

        
        while (potencia > 0) 
        {
            if (n >= potencia) {
                numero = numero + "1";
                n = n - potencia;
            } else {
                numero = numero + "0";
            }
            potencia = potencia / 2;
        }

        
        while (m > 0) 
        {
            X = base[m % 16] + X;
            m = m / 16;
        }

        cout << z << " En base 2:  " << numero << endl;
        cout << z << " En base 16: " << X << endl;
    }
    else 
    {
        cout << "numero invalido";
    }

    return 0;
}