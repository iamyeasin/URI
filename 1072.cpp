#include<bits/stdc++.h>

using namespace std;

int main()
{
    int kase,x,in,out;
    scanf("%d",&kase);

    in = out = 0;
    while(kase--)
    {
        scanf("%d",&x);

        if(x >= 10 && x <= 20)
        {
            in++;
        }
        else
        {
            out++;
        }

    }

    printf("%d in\n",in);
    printf("%d out\n",out);



    return 0;
}

