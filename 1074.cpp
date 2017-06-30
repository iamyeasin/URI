#include<bits/stdc++.h>

using namespace std;

int main()
{
    int kase;
    scanf("%d",&kase);

    while(kase--)
    {
        int a;
        scanf("%d",&a);

        if(a==0)
        {
            printf("NULL\n");
        }
        else if((a&1) && a>0 )
        {
            printf("ODD POSITIVE\n");
        }
        else if(!(a&1) && a>0)
        {
            printf("EVEN POSITIVE\n");
        }
        else if((a&1) && a<0)
        {
            printf("ODD NEGATIVE\n");
        }
        else if(!(a&1) && a<0)
        {
            printf("EVEN NEGATIVE\n");
        }
    }



    return 0;
}

