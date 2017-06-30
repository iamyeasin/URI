#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n=0;
    int kase,n1=1,sum=0;
    cin>>kase;

    for(int ii = 1; ii<=kase; ii++)
    {
        sum = sum+n;
        if(ii == kase)
        {
            printf("%d\n",sum);
        }
        else
        {
            printf("%d ",sum);
        }
        n = n1;
        n1 = sum;
    }


    return 0;
}
