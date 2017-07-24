#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    while (b != 0)
    {
        a %= b;
        a ^= b;
        b ^= a;
        a ^= b;
    }

    return a;
}

int main()
{
    int kase;
    scanf("%d",&kase);

    for(int i=1; i<=kase; i++)
    {
        int a,b;
        scanf("%d %d",&a,&b);

        printf("%d\n",gcd(a,b));
    }

    return 0;
}
