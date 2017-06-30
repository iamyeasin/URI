#include<bits/stdc++.h>

using namespace std;


int main()
{
    double s=1;

    for(int i=3 ,j = 2; i <= 39; i += 2,j *= 2)
    {
        s += ((i*1.00)/(j*1.00));
        //cout<<s<<" "<<i<<" "<<j<<endl;
    }

    printf("%0.2lf\n",s);


    return 0;
}
