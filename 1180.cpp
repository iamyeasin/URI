#include<bits/stdc++.h>

using namespace std;

int main()
{
    int par[5];
    int x,y,m=0,pos;
    scanf("%d",&x);
    for(int i=0; i<x; i++)
    {
        scanf("%d",&y);
        if(y < m)
        {
            m = y;
            pos = i;
        }
    }

    printf("Menor valor: %d\n",m);
    printf("Posicao: %d\n",pos);

    return 0;
}
