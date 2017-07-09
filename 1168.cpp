#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define pi 3.14

using namespace std;

int func(char ch)
{
    if(ch == '1') return 2;
    if(ch == '7') return 3;
    if(ch == '2' || ch == '3' || ch == '5') return 5;
    if(ch == '4') return 4;
    if(ch == '6' || ch == '9' || ch == '0') return 6;
    if(ch == '8') return 7;
}


int main()
{
    int n;
    char s[1024];
    sf("%d\n",&n);

    for(int i=1; i<=n; i++)
    {
        int sum = 0;
        gets(s);
        int len = strlen(s);
        for(int i=0; i<len; i++)
        {
            sum += func(s[i]);
        }
        pf("%d leds\n",sum);
        sum = 0;
    }

    return 0;
}
