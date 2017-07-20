#include<bits/stdc++.h>
#define sf scanf
#define pf printf

using namespace std;

int main()
{
    int kase;
    sf("%d",&kase);

    double taka = 0.0, sum = 0.0,pDay=0.0;
    char fruit[800];

    long total=0,day=1;
    string s1;

    for(int i=1; i<=kase; i++)
    {
        total =1;
        scanf("%lf\n", &taka);
        sum += taka;

       getline(cin,s1);
       for(int i=0;  s1[i]; i++)
       {
           if(s1[i] == ' ')total++;
       }

       pDay += (total*1.00);

        pf("day %ld: %ld kg\n",i,total);
    }

    pf("%0.2lf kg by day\n",pDay/(kase*1.00));
    pf("R$ %0.2lf by day\n",sum/(kase*1.00));



    return 0;
}
