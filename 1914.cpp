#include<bits/stdc++.h>
#define sf scanf
#define pf printf


using namespace std;

int main()
{
    long n1,n2,kase;
    string s1,s2,s3,s4;
    scanf("%ld\n",&kase);


    for(int i=0; i<kase; i++)
    {

        cin >> s1 >> s2 >> s3 >> s4;
        sf("%ld %ld",&n1,&n2);

        if((n1+n2)&1)
        {
             if(s2 == "IMPAR")cout << s1 << endl;
             else cout << s3 << endl;
        }
        else
        {
            if(s2 == "PAR")cout << s1 << endl;
            else cout << s3 << endl;
        }


    }

    return 0;
}
