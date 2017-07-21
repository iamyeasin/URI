#include<stdio.h>
#define sf scanf
#define pf printf
int main()
{
//    freopen("in.txt","rt",stdin);
//    freopen("out.txt","wt",stdout);

    long arr[505][505];

    long n,d,x=1;;
    while( sf("%ld %ld",&n,&d), (n||d))
    {
        for(int i=1; i<=d; i++)
        {
            for(int j=1; j<=n; j++)
            {
                sf("%ld",&arr[i][j]);
            }
        }

        long ok=0;

        long sum=0;
        for(int i=1; i<=n; i++)
        {
            sum =0;
            for(int j=1; j<=d; j++)
            {
                sum += arr[j][i];
            }
            if(sum == d)
            {
                ok=1;break;
            }
        }

        if(ok)puts("yes");
        else puts("no");

    }



    return 0;
}
