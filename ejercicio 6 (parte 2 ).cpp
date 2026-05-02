#include <iostream>
#include <string>
using namespace std;

string convertirmayuscula (string palabra){
    if (palabra.size()>0){
        if (palabra[0]>= 'a'&& palabra[0]<= 'z'){
            palabra[0]=palabra[0]-32; 
        }

    }
    return palabra;

}

string convertirfrase (string frase){
    string palabra="",resultado="";

    for (int i=0; i<frase.size();i++)
    {
        if (frase[i]==' ')
        {
            resultado += convertirmayuscula(palabra)+" ";
            palabra = "";

        }
        else {
            palabra += frase[i];
        }

    }
    resultado += convertirmayuscula(palabra);
    return resultado; 
}
    

int main ()
 {
    string frase1;

     cout << "Ingrese la frase: ";
     getline (cin,frase1 );
     
     cout << "Frase convertida: "<< convertirfrase(frase1)<< endl;
 }