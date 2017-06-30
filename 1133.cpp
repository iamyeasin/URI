#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x,y;
    scanf("%d %d",&x,&y);

    for(int i = min(x,y)+1; i < max(x,y); i++)
    {
        int xx = i%5;
        if((xx == 2  || xx == 3))
        {
            printf("%d\n",i);
        }
    }




    return 0;
}
