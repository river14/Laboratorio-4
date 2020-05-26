#include "iostream"
#include "cstdlib"
#include "cmath"

using namespace std;

int main ()

{
    int n;

    cout<<"DETERMINA SI UN NUMERO ES PAR O IMPAR";
    cout<<endl;
    cout<<endl;

    cout<<"Introduce el numero: ";
    cin>>n;
    cout<<endl;

    if (n % 2 == 0)
    {
        cout<<"Es par";
        cout<<endl;
    }

    else
    {
        cout<<"Es impar";
        cout<<endl;
    }

    system ("pause");
    return 0;
    
    


}