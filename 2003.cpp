#include<bits/stdc++.h>
#define sf scanf
#define pf printf

using namespace std;

int main()
{
    int x,y[5];
    int counter=0;

    cin >> x;

    for(int i=0; i<5; i++)
    {
        cin >> y[i];
        if(y[i] == x) counter++;
    }

    pf("%d\n",counter);




    return 0;
}
