#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x,counter=0;
    int sum =0;

    while(scanf("%d",&x))
    {
        if(x >= 0)
        {
            sum += x;
            counter++;
        }
        else
        {
            printf("%.2lf\n",(sum*1.00)/counter*1.00);
            break;
        }
    }


    return 0;
}
