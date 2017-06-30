/*
    In this problem it says that an two dimensional array will be given.
    Row number will be given.
    and will tell you to sum or print the average.

    so first take input row number N, then Command for operation.then take 144 piece double value.then just calculate the row using a loop.
    it's that simple.

*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    double num[12][12];
    int n;
    char ch;
    scanf("%d",&n);
    getchar();
    scanf("%c",&ch);


    for(int i=0; i < 12; i++)
    {
        for(int j=0; j < 12; j++)
        {
            scanf("%lf",&num[i][j]);
        }
    }
    double sum =0;

    for(int i=0; i < 12; i++)
    {
        sum += num[n][i];
    }
    if(ch == 'S')
    {
        printf("%.1lf\n",sum);
    }
    else if(ch == 'M')
    {
        printf("%.1lf\n",(sum*1.00)/12.0);
    }

    return 0;
}
