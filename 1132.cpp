#include<bits/stdc++.h>

using namespace std;

int main()
{
    long a,b,sum=0;
    scanf("%d %d",&a,&b);

    for(int i=min(a,b); i<=max(a,b); i++)
    {
        if(i%13 != 0)
        {
            sum += i;
        }
    }

    printf("%d\n",sum);


    return 0;
}
