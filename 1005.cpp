#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    double a,b,c;
    cin>>a>>b;

    //cout<<"MEDIA"<<((a*2)+(b*3)+(c*5))/10<<endl;
    printf("MEDIA = %0.5lf\n",((a*3.5)+(b*7.5))/(3.5+7.5));

    return 0;
}
