#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n[20],c,x=0;
    for(int i=0; i<20; i++)
    {
        scanf("%d",&n[i]);
    }

    int i,j,temp;
    for(i=0,j=19; i<10; i++,j--)
    {
        temp = n[i];
        n[i] = n[j];
        n[j] = temp;
    }

    for(int i=0; i<20; i++)
    {
        printf("N[%d] = %d\n",i,n[i]);
    }



    return 0;
}
