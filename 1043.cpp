#include <iostream>
#include <stdio.h>
#include <math.h>
#include <algorithm>

using namespace std;

int main()
{
    double a,b,c;
    cin>>a>>b>>c;

    if(a+b>c && a+c>b && c+b>a)
    {
        printf("Perimetro = %0.1lf\n",a+b+c);
    }
    else
    {
        printf("Area = %0.1f\n",0.5*(a+b)*c);
    }

    return 0;

}
