#include<iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b;

    if(a>b)
    {
        swap(a,b);
    }

      //  cout<<a<<"  "<<b;
    if(b%a == 0)
    {
        cout<<"Sao Multiplos"<<endl;
    }
    else
    {
        cout<<"Nao sao Multiplos"<<endl;
    }

    return 0;
}
