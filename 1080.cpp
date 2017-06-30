#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[101],pos,hi;

    for(int i=0; i<100; i++)
    {
        scanf("%d",&arr[i]);
    }

    hi = pos = 0;

    for(int i=0; i<100; i++)
    {
        if(arr[i] > hi)
        {
            hi = arr[i];
            pos = i+1;
        }
    }


    printf("%d\n%d\n",hi,pos);

    return 0;
}


