#include "iostream"
#include "cstdlib"
#include "cmath"

using namespace std;

int main ()
{
    float n;

    cout<<"DETERMINA SI UN NUMERO ES NEGATIVO, POSITIVO O CERO  ";
    cout<<endl;
    cout<<endl;

    cout<<"Introduce el numero: ";
    cin>>n;
    cout<<endl;

    if (n > 0)
    {
        cout<<"El numero es positivo";
    }

    else if (n < 0)
    {
        cout<<"El numero es negativo";
    }

    else
    {
        cout<<"Es cero";
    }

    system ("pause");
    return 0;
    
    
    


    






}

