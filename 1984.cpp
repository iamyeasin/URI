#include<bits/stdc++.h>
#define sf scanf
#define pf printf

using namespace std;

int main()
{
    char arr[1020];
    sf("%s",arr);

    reverse(arr,arr+strlen(arr));
    pf("%s\n",arr);


    return 0;
}
