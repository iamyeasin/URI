#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define pi 3.14

using namespace std;

void func(int n)
{
    switch(n)
    {
        case 0: pf("PROXYCITY\n");break;
        case 1: pf("P.Y.N.G.\n");break;
        case 2: pf("DNSUEY!\n");break;
        case 3: pf("SERVERS\n");break;
        case 4: pf("HOST!\n");break;
        case 5: pf("CRIPTONIZE\n");break;
        case 6: pf("OFFLINE DAY\n");break;
        case 7: pf("SALT\n");break;
        case 8: pf("ANSWER!\n");break;
        case 9: pf("RAR?\n");break;
        case 10: pf("WIFI ANTENNAS\n");break;
    }
}


int main()
{
    int n;
    cin >> n;

    for(int i=1; i<=n; i++)
    {
        int a,b;
        cin >> a >> b;

        func(a+b);
    }

    return 0;
}
