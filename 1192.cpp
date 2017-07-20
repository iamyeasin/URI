#include<bits/stdc++.h>
#define sf scanf
#define pf printf

using namespace std;

long ind[2050];

int main()
{

    char ch;
    long a,b,kase;
    cin >> kase;

    for(int i=1; i<=kase; i++)
    {
        sf("%ld %c %ld",&a,&ch,&b);

        if(ch >= 'A' && ch <= 'Z')
        {
            if(a == b)
            {
                pf("%ld\n",a*b);
            }
            else
            {
                pf("%ld\n",b-a);
            }
        }
        else if(ch >= 'a' && ch<='z')
        {
            if(a == b)
            {
                pf("%ld\n",a*b);
            }
            else
            {
                pf("%ld\n",b+a);
            }
        }
    }



    return 0;
}
