#include<bits/stdc++.h>

using namespace std;

int main()
{
    int sum,n,a;
    scanf("%d",&a);

    while(1)
    {
        scanf("%d",&n);
        if(n <= 0)continue;
        else break;
    }

    sum =0;
    for(int i=1; i <= n; i++)
    {
        sum += a;
        a++;
    }

    printf("%d\n",sum);

    return 0;
}
