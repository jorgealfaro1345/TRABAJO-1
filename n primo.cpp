#include <iostream>
using namespace std;
int main ()
{
    int num,suce,p,primos;
    cout <<"Ingresar la posicion del numero primo deseado:";
    cin>>num;
    suce=2;
    primos=0;
    while(primos<=num)
    {
        for (p=2;suce%p!=0;p++);
        if(p==suce)
            {
            primos++;
            if (primos==num)
                cout<<suce<<endl;
            }
        suce++;
    }
    return 0;
}
