#include<bits/stdc++.h>
#define sf scanf
#define pf printf

using namespace std;

int main()
{
    long long n,s,s2;
    sf("%lld",&n);

    for(int i=0; i<n; i++)
    {
        sf("%lld %lld",&s,&s2);

        bool x=1;
        if(s == s2) x=1;
        else if(s > s2)
        {
            while(s2>0)
            {
                if((s2%10) != (s%10))
                {
                    x=0;
                    break;
                }

//                cout << s2 << " " << s << endl;
                s2 = s2/10;
                s /= 10;
            }
        }else x=0;


        if(x) puts("encaixa");
        else puts("nao encaixa");
    }


    return 0;
}
