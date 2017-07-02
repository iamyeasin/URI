#include<bits/stdc++.h>
#define sf scanf
#define pf printf

using namespace std;

int main()
{
    int n;
    //~ freopen("in.txt","rt",stdin);
    //~ freopen("out.txt","wt",stdout);

    while(sf("%d",&n),n)
    {
        if(n==1)
        {
            pf("1\n\n");
            continue;
        }
        else if( n==2 )
        {
            pf("1 2\n2 4\n\n");
            continue;
        }
        else
        {
           int big=1;
           big = pow(2,(2*(n-1)));
           
            int xx = 0;
            while(big > 0)
            {
                big /= 10; xx++;
            }
            int y=1;
            for(int i=1; i<=n; i++)
            {
                for(int j=y,k=1; k<=n; j*=2,k++)
                {
                    int nn=j,dg=0;
                    while(nn>0)
                    {
                        nn/=10; dg++;
                    }
                    if(k==1)
                    {
                        for(int m=1; m <=(xx-dg); m++)
                        {
                            pf(" ");
                        }
                        pf("%d",j);
                    }
                    else if(k != n && k != 1)
                    {
                        for(int mn=1; mn<=(xx-dg)+1; mn++)
                        {
                            pf(" ");
                        }
                        pf("%d",j);
                    }
                    else if(k==n)
                    {
                        for(int mn = 1; mn<=(xx-dg)+1; mn++)
                        {
                            pf(" ");
                        }
                        pf("%d",j);
                    }
                    
                    //~ pf("\n");
                    
	              } 
	              
	              y *= 2;
	             pf("\n");
            }

        }
		pf("\n");
    }


    return 0;
}
