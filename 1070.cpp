#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
    int n,e,o,k;
    scanf("%d",&n);

    o=0;
    for(int i=n; i<=n*n; i++)
    {
        if(o == 6)
        {
            break;
        }
        else if((i&1) && o != 6)
        {
            o++;
            printf("%d\n",i);
        }
    }


    return 0;
}

