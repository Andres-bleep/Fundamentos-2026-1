#include  <iostream>
#include <cmath>

using namespace std;

bool verificar (int x, int y)
{ 
    if ( x==y)
    {
        return true;
    }
    else {
        return false;
    }
}

int main ()
{
    int numero, nuevo=0,base,i=0,nuevo2;
    cout << "ingrese el numero ";
    cin>> numero;
    nuevo2=numero;
    while ( numero > 0)
    {
        nuevo = (nuevo*10) + (numero%10); 
        numero = numero / 10;  
    }
    if (verificar(nuevo,nuevo2)== true)
    {
        cout<< "si es palindromo";
    }
    else {
        cout <<"no es palindromo";
    }
}




