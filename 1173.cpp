#include<bits/stdc++.h>

using namespace std;


int main()
{
    int x[10];
    int in;
    scanf("%d",&in);

    x[0] = in;
    for(int i=1; i<10; i++)
    {
        in *= 2;
        x[i] = in;
    }

    for(int j=0; j<10; j++)
    {
        printf("N[%d] = %d\n",j,x[j]);
    }




    return 0;
}
