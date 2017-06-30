/*
#include<iostream>
#include<stdio.h>
#include<algorithm>
#define pi 3.14159
using namespace std;

int main()
{
    int arr[3];
    cin>>arr[0]>>arr[1]>>arr[2];

    sort(arr,arr+3);
    cout<<arr[2]<<" eh o maior"<<endl;



    return 0;
}
*/

#include<iostream>
#include<stdio.h>
#include<algorithm>
#define pi 3.14159
using namespace std;

int main()
{
    int a,b,c,max1,fmax;
    cin>>a>>b>>c;

    max1 = (a+b+abs(a-b))/2;// Finding 2 biggest values into two
    fmax = (c+max1+abs(c-max1))/2; //comparing 3rd value with the largest value

    cout<<fmax<<" eh o maior"<<endl;



    return 0;
}
