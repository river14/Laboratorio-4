#include "iostream"
#include "cstring"
#include "cstdlib"

using namespace std;

int main ()

{
    char palabra [50];
    int x;

    cout<<"VERIFICA SI LA PALABRA INGRESADA INICIA Y TERMINA CON LA MISMA LETRA";
    cout<<endl;
    cout<<endl;

    cout<<"Ingresa tu palabra: ";
    cin>>palabra;

    x = strlen (palabra);

    if (palabra [0] == palabra [x-1])
    {
        cout<<"La letra es la misma con la que se inicia";
    }

    else
    {
        cout<<"La letra no es la misma con la que se inicia";
    
    
    }
    
    
    
    
    system ("pause");
    return 0;
    

    

    





    

    system ("pause");
    return 0;
    
    
}