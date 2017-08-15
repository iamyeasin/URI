#include<bits/stdc++.h>
#define sf scanf
#define pf printf

using namespace std;

int main(){

    long n,k,x;
    int fre[1024] = {0};

    while(sf("%ld %ld",&n,&k),(n||k)){
        long mx = 0;
        for(int i=1; i<=n; i++){
            sf("%ld",&x); fre[x]++;
            if(x > mx) mx = x;
        }

        int counter = 0;
        for(int i=1; i<=mx; i++){
            if(fre[i]>=k) counter++;
        }

        cout << counter << endl;
        memset(fre,0,sizeof(fre));
    }


    return 0;
}
