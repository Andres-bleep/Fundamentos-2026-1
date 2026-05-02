#include <iostream>
#include <string>
using namespace std;

int mayuscula(char numeromayuscula)
{
    char MAYUSCULAS[26]={'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N',  'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    int y;
    for (y=0;y<26;y++)
    {
        if (numeromayuscula==MAYUSCULAS[y])
        {
            return (int)1;
            
        }

    }
    return (int)0;
}
int miniscula(char numerominuscula)
{
    char MINISCULA[26]={'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int y;
    for (y=0;y<26;y++)
    {
        if (numerominuscula==MINISCULA[y])
        {
            return (int)1;
            
        }

    }
    return (int)0;          
}
int numero(char numeros)
{
    char NUMERO[10]={'0','1','2','3','4','5','6','7','8','9'};
    int y;
    for (y=0;y<10;y++)
    {
        if (numeros==NUMERO[y])
        {
            return (int)1;
            
        }

    }
    return (int)0;          
}
string resultado(int x ,int l, int h, int p)
{
    int resultado;
    string k;
    resultado= x+l+h+p;
    if (resultado==4)
    {
        return "La contraseña es muy segura";
    }
    else if (resultado==3 || resultado==2)
    {
        return "La contraseña es medio segura";
    }
    else if  (resultado==1 || resultado==0)
    {
     return "La contraseña es insegura segura";
    }
    else 
    {
        return " ";
    }       
}

int main ()
{
    int i,x,y,z,p; 
    string contraseña;
    cout<< "ingrese la contraseña: ";
    getline( cin, contraseña );

    for(i=0;i<contraseña.size();i++)
    {
        x= mayuscula(contraseña[i]);
        if (x==1)
        {
            break;
        }
    }
     for(i=0;i<contraseña.size();i++)
    {
        y= miniscula(contraseña[i]);
        if (y==1)
        {
            break;
        }
    }
      for(i=0;i<contraseña.size();i++)
        {
        z= numero(contraseña[i]);
        if (z==1)
        {
            break;
        }
        }
     if (contraseña.size()>=8)
        {
        p=1;
        }
     else
        {
        p=0;
        }
    cout << resultado(x,y,z,p)<< endl;
    
  
}