#include<bits/stdc++.h>

using namespace std;

int main()
{
    double i = 0.00,k = 0.00;

    while(i <= 2)
    {
        for(int j=1; j <= 3; j++)
        {
            cout<<"I="<<i<<" "<<"J="<<k+j<<endl;
            //printf("%.1lf %.1lf\n",i,k+j);
        }
        i += .2;
        k += .2;
    }



    return 0;
}
