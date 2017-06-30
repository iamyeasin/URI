#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<math.h>
#define pi 3.14159

using namespace std;

int main()
{
    double x1,y1,x2,y2,distance;
    cin>>x1>>y1>>x2>>y2;

    distance = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    //cout<<distace<<endl;
    printf("%0.4lf\n",distance);


    return 0;
}
