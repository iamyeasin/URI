#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,x,y;

    for(i=1; i<=9; i+=2)
    {
        if(i==1)
        {
            x = 7;
            y = 5;
        }
        for(j=x; j>=y; j--)
        {
            printf("I=%d J=%d\n",i,j);
        }

        x = x+2;
        y = y+2;
    }

    return 0;
}

