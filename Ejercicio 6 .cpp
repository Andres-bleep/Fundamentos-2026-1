#include <iostream>
#include <string>
using namespace std;
int main()
{
    long long int n, d = 2, cont = 0, c;
    string si = "";
    cout << "Coloque un numero ";
    cin >> n;
    if(n > 1)
    {
        c = n;
        cout << n << " = ";
        while(n > d)
        {
            while(n % d != 0)
            {
                d++; 
            }
            cout << si << d;
            cont++;
            si = " X ";
            n = n / d;
        } 

         if(cont == 1)
        {
            cout << endl;
            cout << c << " es primo";
        }
        else
        {
            cout << endl;
            cout << c << " tiene " << cont << " factores primos"; 
        }
    }
    else
    {
        cout << "tiene que colocar un valor mayor a 1";
    } 
}