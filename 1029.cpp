#include<bits/stdc++.h>
#define sf scanf
#define pf printf

using namespace std;

long long fibs[40],calls[50];

void fib(){
    fibs[0] = 0;fibs[1] = 1;
     calls[1]=1,calls[2]=2,calls[3] = 4;
    for(int j=2; j<=39; j++){
            fibs[j] = fibs[j-1]+fibs[j-2];
            calls[j+2] = calls[j]+calls[j+1]+2;
    }
}


int main(){

    fib();
//    call();

    int kase;
    cin >> kase;

    for(int i=1; i<=kase; i++){
        long long x;
        cin >> x;
        pf("fib(%lld) = %lld calls = %lld\n",x,calls[x],fibs[x]);
    }


    return 0;
}
