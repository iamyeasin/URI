#include<bits/stdc++.h>

using namespace std;

int main()
{
    int kase,x;
    double f1,f2,f3;
    scanf("%d",&kase);
    x = kase;

    while(kase--)
    {
        cin>>f1>>f2>>f3;

        f1*=2;
        f2*=3;
        f3*=5;

        double avg = (f1+f2+f3)/10.0;

        printf("%0.1lf\n",avg);
    }



    return 0;
}

