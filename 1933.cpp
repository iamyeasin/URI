#include<bits/stdc++.h>
#define sf scanf
#define pf printf

using namespace std;

int main()
{
    int n1,n2,n3,n4;
    sf("%d %d",&n1,&n2);

    if(n1==n2)pf("%d\n",n1);
    else if(n1>n2)pf("%d\n",n1);
    else pf("%d\n",n2);

    return 0;
}
