#include <iostream>
#include <string>
using namespace std;

string censurar(string x)
{
    string vocles[11]={"A","E","I","O","U","a","e","i","o","u"," "};
    for (int y=0;y<11;y++)
    {
        if (x==vocles[y])
        {
            return "*";
        }
    }
     return x;
} 
int main ()
{
    int i;
    string fraseinicial,frasefinal="",letra;
    
    cout << "Ingrese la frase: ";
    getline(cin,fraseinicial );

    for (i=0;i<fraseinicial.size();i++)
    {
        letra="";
        letra = fraseinicial[i];
        frasefinal= frasefinal + censurar(letra);
    }
    cout << frasefinal;
}