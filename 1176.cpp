#include<bits/stdc++.h>

using namespace std;

long long int  fib[100];

void fibs()
{
    int x=0,y=1,sum = 0;
    fib[0] = 0,fib[1] = 1;
    for(int i=2; i<100; i++)
    {
        fib[i] = fib[i-1]+fib[i-2];
    }
}



int main()
{
    int kase;
    fibs();
    scanf("%d",&kase);
    int x;

    while(kase--)
    {
        scanf("%d",&x);
        printf("Fib(%d) = %lld\n",x,fib[x]);
    }


    return 0;
}
