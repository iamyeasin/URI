#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n[1000];
    int x;
    scanf("%d",&x);
    int m=0;

    for(int i=0; i<1000; i++)
    {
        if(m == x)
        {
            m = 0;
        }
        printf("N[%d] = %d\n",i,m);
        m++;
    }


    return 0;
}
