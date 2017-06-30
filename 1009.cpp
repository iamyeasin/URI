#include<bits/stdc++.h>

using namespace std;

int main()
{
    char ch[100];
    gets(ch);

    double m,n;

    cin>>m>>n;

    if(n == 0.00)
    {
        printf("TOTAL = R$ %0.2lf\n",m);
    }
    else
    {
        printf("TOTAL = R$ %0.2lf\n",m+((n*15.00)/100.00));

    }



    return 0;
}
