#include<bits/stdc++.h>

using namespace std;


int main()
{
    int x[10];

    for(int i=0; i<10; i++)
    {
        scanf("%d",&x[i]);
        if(x[i] == 0 || x[i] < 0 || x[i] == NULL)
        {
            x[i] = 1;
        }
    }

    for(int i=0; i<=9; i++)
    {
        printf("X[%d] = %d\n",i,x[i]);
    }




    return 0;
}
