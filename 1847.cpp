#include<bits/stdc++.h>
#define pf printf
#define sf scanf

using namespace std;

bool check(int a,int b, int c)
{
    int f = abs(a-b);
    int s = abs(b-c);

    if(a > b && (c >= b))
    {
        return true;
    }

    if(b > a && (b >= c))
    {
        return false;
    }

    if(a < b && b < c)
    {
        if(s<f)return false;
        else if(s >= f)return true;

    }

    if(a > b && b > c)
    {
        if(s < f) return true;
        else if(s >= f) return false;
    }

    if(a == b && c > b)return true;
    else return false;

}

int main()
{
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);

    int a,b,c;
    sf("%d %d %d",&a,&b,&c);

        if(check(a,b,c))pf(":)\n");
        else pf(":(\n");


    return 0;
}
