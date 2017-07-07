#include<bits/stdc++.h>
#define sf scanf
#define pf printf

using namespace std;


int main()
{
    int p,n,nh;
    int heights[105];
    cin >> p >> n;

    bool fall=false;

    for(int i=0; i<n; i++)
    {
        cin >> heights[i] ;
        if(i > 0)
        {
            int diff = abs(heights[i] - heights[i-1]);
            if(diff > p && p <= 10) fall = true;
        }
    }

    if(fall) pf("GAME OVER\n");
    else pf("YOU WIN\n");


    return 0;
}
