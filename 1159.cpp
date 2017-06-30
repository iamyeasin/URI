#include<bits/stdc++.h>

using namespace std;


int main()
{
    int kase,x;

    while(scanf("%d",&x))
    {
        int sum = 0;
        if(!x)
            break;
        else
        {
            if(x&1)
            {
                x++;
            }

            for(int i=1; i <= 5; i++)
            {
                sum += x;
                x += 2;
            }
        }
        printf("%d\n",sum);
    }



    return 0;
}
