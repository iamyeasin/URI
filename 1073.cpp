#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x,sum=0;
    scanf("%d",&x);

    if(x>0)
    {
        for(int i=2; i<=x; i+=2)
        {
            printf("%d^2 = %d\n",i,i*i);
        }

    }

    return 0;
}

