#include "iostream"
#include "cstring"
#include "cstdlib"

using namespace std;

int main ()

{
    char palabra [50];

    cout<<"DETERMINA LA LONGITUD DE UNA PALABRA";
    cout<<endl;
    cout<<endl;

    cout<<"Introduce la palabra: ";
    cin>>palabra;
    cout<<endl;

    cout<<"La palabra contiene: " <<strlen(palabra)<< " caracteres";
    cout<<endl;
    cout<<endl;

    if (strlen(palabra) > 10)
    {
        cout<<"La palabra ingresada contiene mas de 10 caracteres";
        cout<<endl; 
        cout<<endl;   
    }



    else if (strlen(palabra) == 10)
    {
        cout<<"La palabra ingresada contiene exactamente 10 caracteres";
        cout<<endl;
        cout<<endl;
    }
    
    else
    {
        cout<<"La palabra ingresada contiene menos de 10 caracteres";
        cout<<endl;
        cout<<endl;
    }

    if (strlen(palabra) % 2 == 0)
    {
        cout<<"El numero de palabras es par";
        cout<<endl;
        cout<<endl;
    }

    else
    {
        cout<<"El numero de palabras es impar";
        cout<<endl;
        cout<<endl;
    }
    
    
    
    
    

    system ("pause");
    return 0; 
    
    



}