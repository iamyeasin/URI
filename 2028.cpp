//Get a suit solution idiot.

#include<bits/stdc++.h>
#define sf scanf
#define pf printf

using namespace std;

int main()
{
    int n;

    int k=0,kase=1;
    while(sf("%d",&n) != EOF)
    {
        if(!n)
        {
            pf("Caso %d: 1 numero\n0\n\n",kase++);
            continue;
        }
        else
        {
            int x = ((n*(n+1))); x = (x >> 1) +1;
            pf("Caso %d: %d numeros\n0 ",kase++,x);

            for(int i=0; i<n; i++)
            {
                if(i==(n-1))k=1;
                for(int j=0; j<=i; j++)
                {
                    if(k && j==i){
                         pf("%d\n",i+1);
                         continue;
                    }
                    pf("%d ",i+1);

                }
            }
        }

        pf("\n");
        k=0;
    }

    return 0;
}
