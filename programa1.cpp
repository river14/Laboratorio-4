#include "iostream"
#include "cstdlib"
#include "cmath"

using namespace std;

int main ()

{   
    int num1;
    int num2;
    int divisor;

    cout<<"CALCULA SI UN NUMERO ES DIVISBLE ENTRE OTRO";
    cout<<endl;
    cout<<endl;

    cout<<"Digita el numerador: ";
    cin>>num1;
    cout<<endl;

    cout<<"Digita el denominador: ";
    cin>>num2;
    cout<<endl;

    divisor = (num1 % num2);

    if (divisor == 0)
    {
        cout<<"Si es divisible";
        cout<<endl;
    }

    if (divisor != 0)
    {
        cout<<"No es divisible";
        cout<<endl;
    }

    system ("pause");
    return 0;
    
    


}

