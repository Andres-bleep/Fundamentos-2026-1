#include <iostream>
using namespace std ;
int main ()
{
    float notas=0.0 , mayor=0.0 , menor=5.0 , promedio, suma=0.0 ;
    int i=0, aprobados=0, desaprobados=0;
    while (notas!= -1.0 )
    {   
        cout <<  "Ingrese las notas: ";
        cin>> notas;
        if (notas >= 0.0 && notas <= 5.0 )
        {                   
            i++;
            if (mayor < notas )
            {
                mayor = notas;     
            }
            if (menor > notas )
            {
                menor = notas;
            }
            if (notas >= 3.0)
            {
                aprobados++;
            }
            else 
            {
                desaprobados++;
            }

            suma = notas + suma;

        }
        else 
        {
            if (notas != -1.0)
            {
                cout << "Ingrese un valor valido"<<endl;
            }
           
        }
        
    }
    promedio = suma / i ;
    cout << "Cantidad de notas: "<< i<< endl ;
    cout << "Promedio del grupo:  "<< promedio << endl; 
    cout << "Nota maxima: "<< mayor << endl;
    cout << "Nota minima: "<< menor << endl;
    cout << "Numero de aprobados: "<< aprobados<< endl;
    cout << "Numero de desaprobados: "<< desaprobados<< endl;
    

}