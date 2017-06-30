/*
Look at description closely "sum of A and B and if C and D *****were**** positives values and if A is even,",it says were, not is...so it'll not be in the
condtion.

*/
#include<iostream>

using namespace std;

int main()
{
    long A,B,C,D;
    cin>>A>>B>>C>>D;

    if((B>C) && D>A && (C+D)>(A+B) && !(A&1))
    {
        cout<<"Valores aceitos"<<endl;
    }
    else
    {
        cout<<"Valores nao aceitos"<<endl;
    }

    return 0;
}
