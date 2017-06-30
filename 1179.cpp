#include<bits/stdc++.h>

using namespace std;

int main()
{
    int even[5],odd[5],e=0,o=0;
    int num[15];

    for(int i=0; i<15; i++)
    {
        scanf("%d",&num[i]);
        if(e == 5)
        {
            for(int j=0; j< e; j++)
            {
                printf("par[%d] = %d\n",j,even[j]);
            }
            e = 0;
        }
        if(o == 5)
        {
            for(int j=0; j< o; j++)
            {
                printf("impar[%d] = %d\n",j,odd[j]);
            }
            o = 0;
        }

        if(!(num[i]&1))
        {
            even[e] = num[i];
            e++;
        }
        else
        {
            odd[o] = num[i];
            o++;
        }
    }

    for(int i=0; i<o; i++)
    {
        printf("impar[%d] = %d\n",i,odd[i]);
    }
    for(int i=0; i<e; i++)
    {
        printf("par[%d] = %d\n",i,even[i]);
    }




    return 0;
}

