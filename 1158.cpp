#include<bits/stdc++.h>

using namespace std;


int main()
{
    int kase,x,y,sum;
    scanf("%d",&kase);

    while(kase--)
    {
        scanf("%d %d",&x,&y);
        sum = 0;

        if(!(x&1))
        {
            x++;
        }
        for(int i = 1; i <= y; i ++)
        {
            sum += x;
            x += 2;
        }
        printf("%d\n",sum);
    }


    return 0;
}
