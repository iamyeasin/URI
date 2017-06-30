#include<bits/stdc++.h>

using namespace std;


int main()
{
    double s=1;

    for(int i=2; i <= 100; i++)
    {
        s += (1.00/(i*1.00));
       // cout<<s<<endl;
    }

    printf("%0.2lf\n",s);


    return 0;
}
