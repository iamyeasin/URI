#include<bits/stdc++.h>
#define sf scanf
#define pf printf

using namespace std;

long cycle=0,high=0;

void hn(long long n){
    if(n>high)high = n;
    if(n==1){return;}
    else if(n&1) hn(n = 3*n+1);
    else if(!(n&1))hn(n = n>>1);

}

int main(){

    long n;
    while(scanf("%ld",&n),n){
        hn(n);
        printf("%ld\n",high); high=0;
    }


    return 0;
}
