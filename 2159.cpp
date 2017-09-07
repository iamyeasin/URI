#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    scanf("%d",&a);

    double mn = a/ log(a);
    double mx = 1.25506*(a/ log(a));
    printf("%0.1lf %0.1lf\n",mn,mx);

    return 0;
}
