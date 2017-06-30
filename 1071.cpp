#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[2],sum=0;
    scanf("%d %d",&arr[0],&arr[1]);

    sort(arr,arr+2);
    int x = arr[0];
    int y = arr[1];


    for(int i=x+1; i<y; i++)
    {
        if(i%2 != 0)
        {
            sum += i;
        }
    }


    cout<<sum<<endl;

    return 0;
}


