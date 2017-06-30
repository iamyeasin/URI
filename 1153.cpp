#include<bits/stdc++.h>

using namespace std;

long long int fact(long long int n)
{
    long long int product = 1;

    for(int i=1; i<= n; i++)
    {
        product *= i;
    }
    return product;
}



int main()
{
    int n=0;
    int kase,n1=1,sum=0;
    cin>>kase;

    printf("%lld\n",fact(kase));


    return 0;
}
