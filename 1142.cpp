#include<bits/stdc++.h>

using namespace std;

int main()
{
    int kase;
    scanf("%d",&kase);

    for(int i=1; i<= 4*kase; i++)
    {
        if(i%4 == 0)
        {
            printf("PUM\n",i);
        }
        else
        {
            printf("%d ",i);
        }

    }


    return 0;
}
