#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define mx 1000005

using namespace std;

int main(){

    long a,b,c;
    while(sf("%ld%ld%ld",&a,&b,&c),((a||b)||c)){
        pf("%0.0lf\n",trunc(cbrt(a*b*c)));
    }

    return 0;
}
