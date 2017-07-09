#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define pi 3.14

using namespace std;

int main()
{
    int n;

    float volume ,h,r,area,dia;

    while(sf("%f %f",&volume,&dia) != EOF)
    {
        area = pi*(dia/2.0)*(dia/2.0);
        h = volume/area;
        pf("ALTURA = %.2f\nAREA = %.2f\n",h,area);

    }


    return 0;
}
