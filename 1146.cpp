#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    while(scanf("%d",&x))
    {
        if(!x)
            break;

        else
        {
            for(int i=1; i <= x; i++)
            {
                if(i==x)
                {
                    printf("%d\n",i);
                }
                else
                {
                    printf("%d ",i);
                }
            }
        }
    }



    return 0;
}
