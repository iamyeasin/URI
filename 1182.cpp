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
        sum += num[i][n];
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
