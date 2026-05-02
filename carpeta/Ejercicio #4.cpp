#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n,m,z; 
    string numero="", base="0123456789ABCDEF", X="";
    cout << "Ingrese el numero ";
    cin>> n;
    m=n;
    z=n;
    if (n>=1 && n<=255)
    {
            while (n>0)
            {
                numero = to_string(n%2)+ numero; 
                n= n/2;
            }
            while (m>0)
            {
                X= base[m%16] + X;
                m = m/16;
            }
            cout<<z<<" En base 2: " <<numero<< endl ;
            cout<<z <<" En base 16: "<< X << endl;  
    }
    else {
        cout << "numero invalido"; 
    }
}
 
