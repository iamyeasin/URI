/*
    First made a loop by adding last value at first
    then first value at first
    then just making that condition that both side of point lower than the current point
    else just making that condition that both side of point is upper than the current point
    count the peak
    print the peak

*/

#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define mx 100090

using namespace std;

long ok[mx];

int main()
{
    long n,m,st,kase,peak=0;
    while(sf("%ld",&kase),kase)
    {
        for(long i=1; i<=kase; i++) sf("%ld",&ok[i]);
        ok[0] = ok[kase];
        ok[kase += 1] = ok[1];
        peak =0;

        for(long i=1; i<kase; i++)
        {
            if(((ok[i] > ok[i+1]) && (ok[i] > ok[i-1])) || ((ok[i] < ok[i+1]) && (ok[i] < ok[i-1])))
            {
                peak++;
            }

        }
        cout << peak << endl;
    }

    return 0;

}
