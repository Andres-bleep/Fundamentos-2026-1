#include <iostream>
using namespace std;
int main()
{
    long long n, pas = 0, maximo = 0, d;
    cout << "Coloque un numero";
    cin >> n;
    if(n > 1)
    {
        
        cout << "La secuencia de collatz es: " << n; 

        while(n > 1)
        {
            d = n;
            if(n % 2 == 0)
            {
                n = n / 2;
            
            }
            else
            {
                n = (n * 3) + 1;

            }

            if(d > maximo)
            {
                maximo = d;
            
            }

            pas++;
            cout << " " << "-->" << " " << n;

        }
        cout << endl;
        cout << "Pasos: " << pas;
        cout << endl;
        cout << "Valor maximo: " << maximo;

        
        
    } 
}