#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d",&n);

    unsigned long long int reg=0,flag=0,a,b;
    double marks=0.0,m;

    for(int i=0; i<n; i++)
    {
        scanf("%llu %lf",&reg,&m);
        if(m > marks && m >= 8.0)
        {
            marks =  m;
            a = reg;
            flag =1;
        }
    }

    if(flag)printf("%llu\n",a);
    else printf("Minimum note not reached\n");

    return 0;
}
