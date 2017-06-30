#include<bits/stdc++.h>

using namespace std;

int main()
{

    double x;
    scanf("%lf",&x);
    int m=0;

    printf("N[0] = %.4lf\n",x);
    for(int i=1; i<100; i++)
    {
        x = x/2.00;
        printf("N[%d] = %.4lf\n",i,x);
    }


    return 0;
}
