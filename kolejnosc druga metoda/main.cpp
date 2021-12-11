#include <iostream>

using namespace std;

int main()
{
    int tab[10];

    for( int  i=0;i<=9;i++){
        cout<<endl<<"Podaj "<<i+1<<" liczbe:";
        cin>>tab[i];
    }


    cout<<endl<<"Zawartosc tablicy: "<<endl;

    int a=9;
    while(a>=0){
        cout<<tab[a]<<" ";
        a--;
    }

    return 0;
}
