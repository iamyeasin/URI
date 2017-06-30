#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
    int n,e,o,k;
    double arr[6],p;
    for(int i=0; i<=5; i++)
    {
        scanf("%lf",&arr[i]);
    }
    k=0;
    for(int j=0; j<=5; j++)
    {
        if(arr[j] > 0)
        {
            k++;
            p = p+arr[j];
        }
    }

    printf("%d valores positivos\n%0.1lf\n",k,p/4.00);



    return 0;
}
