#include <iostream>
using namespace std;

int main()
{
    int  n;
    cin>>n;
    if(n<100000)
    {
        for(int i=0; i<n; i++)
        {
            int liczba;
            cin>>liczba;
            if(liczba < 2) // gdy liczba jest mniejsza od 2 nie jest pierwsza
                cout<<"NIE"<<endl;
                else
                {
                    bool prime = true;
                    for(int i=2;i*i<=liczba;i++) //wystarczy że bedzie jeden dzielnik z przedzialu [2;sqrt(liczba]
                        {                        //i już nie jest liczba pierwsza
                            if(liczba%i == 0)
                                prime = false; // gdy znajdzie dzielnik z warunku nie jest pierwsza
                        }
                    if(prime)
                        cout<<"TAK"<<endl;
                    else
                        cout<<"NIE"<<endl;
                }
        }
    }

return 0;
}
