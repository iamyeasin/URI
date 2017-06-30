#include<stdio.h>
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int arr[3],a,b,c;
    cin>>arr[0]>>arr[1]>>arr[2];
    a =arr[0],b=arr[1],c=arr[2];

    sort(arr,arr+3);
    cout<<arr[0]<<endl<<arr[1]<<endl<<arr[2]<<endl<<endl;
    cout<<a<<endl<<b<<endl<<c<<endl;

    return 0;
}
