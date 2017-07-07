#include<bits/stdc++.h>
#define sf scanf
#define pf printf

using namespace std;


int main()
{

    double x,y;
    cin >> x >> y;
    double dd = (y-x);

    double xy = dd/(x);
    pf("%0.2lf%c\n",(xy)*100.00,37);


    return 0;
}
