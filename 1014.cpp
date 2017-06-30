#include<iostream>
#include<stdio.h>
#define pi 3.14159

using namespace std;

int main()
{
    double path,speed;
    cin>>path>>speed;

    printf("%0.3lf km/l\n",path/speed);


    return 0;
}
