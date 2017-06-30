#include<bits/stdc++.h>

using namespace std;

int main()
{
    double num[12][12];
    int n;
    char ch;
    scanf("%c",&ch);


    for(int i=0; i < 12; i++)
    {
        for(int j=0; j < 12; j++)
        {
            scanf("%lf",&num[i][j]);
        }
    }
    double sum = 0;
    int counter = 0;

    for(int i=0; i < 12; i++)
    {
        for(int j=0; j < i; j++) // i porjonto calculate korsi.
        {
            sum += num[i][j];
            counter++;
        }
    }

    //cout<<counter<<endl;
    if(ch == 'S')
    {
        printf("%.1lf\n",sum);
    }
    else if(ch == 'M')
    {
        printf("%.1lf\n",(sum*1.00)/counter*1.0);
    }



    return 0;
}
