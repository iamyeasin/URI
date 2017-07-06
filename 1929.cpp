#include<bits/stdc++.h>
#define sf scanf
#define pf printf

using namespace std;

bool isTri(int x,int y,int z)
{
    if(x+y>z && y+z>x && x+z > y)return true;
    else return false;
}


int main()
{
    int n1,n2,n3,n4;
    int arr[5];
    int diff[4];

    for(int i=0; i<4; i++)
    {
        sf("%d",&arr[i]);
    }

    int flag=0;
    for(int i=0; i<24; i++)
    {
        next_permutation(arr,arr+4);
//        cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;

        if(isTri(arr[0],arr[1],arr[2]))
        {
            flag=1;
        }
    }
    if(flag)pf("S\n");
    else pf("N\n");

    return 0;
}
