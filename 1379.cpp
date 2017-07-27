#include<stdio.h>
#define sf scanf
#define pf printf

int main()
{
//    freopen("in.txt","rt",stdin);
//    freopen("out.txt","wt",stdout);

    long a,b;
    while(sf("%d %d",&a,&b),(a || b))
    {
        pf("%ld\n", (b>a)? a- (b-a):a -(a-b));


    }

    return 0;
}
