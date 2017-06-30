#include<bits/stdc++.h>

using namespace std;

int isPrime(int x)
{
    if(x < 2)
    {
        return 0;
    }
    else if(x == 2)
    {
        return -1;
    }
    else if(x % 2 == 0)
    {
        return 0;
    }

    for(int i=3; i*i <= x; i += 2)
    {
        if(x%i == 0)
        {
            return 0;
        }
    }

    return -1;
}



int main()
{
    int kase,x,sum,t;
    scanf("%d",&kase);

    while(kase--)
    {
        scanf("%d",&t);
        if(!isPrime(t))
        {
            printf("%d nao eh primo\n",t);
        }
        else
        {
            printf("%d eh primo\n",t);
        }
    }



    return 0;
}
