#include <iostream>
using namespace std;

int MCD (int x,int y)
{
    int t=1;
    while (t!=0)
    {
       t=x%y;
       x=y;
       y=t; 
    } 
    return x;
}

int main()
{
    int x,y,MCM;
    cout << "ingrese el 1 numero: ";
    cin>>x;
    cout << "ingrese el 2 numero: ";
    cin>>y;
    if (x>=0 && y>=0)
    {
        MCM= (x*y)/MCD(x,y);
        cout<< "El MCM de sus numeros es: "<< MCM << endl;
        cout <<"El MCD de sus nuemros es: "<< MCD(x,y);
    }
    else {
        cout << "numeros no validos";
    }
}
    