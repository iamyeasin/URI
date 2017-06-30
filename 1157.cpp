#include<bits/stdc++.h>

using namespace std;


int main()
{
    int kase,x;
    cin>>kase;

    for(int i=1; i <= kase; i++)
    {
        if(kase%i == 0)
        {
            printf("%d\n",i);
        }
    }



    return 0;
}

