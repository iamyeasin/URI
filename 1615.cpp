 #include<bits/stdc++.h>
#include<cstdio>
#include<algorithm>
#define sf scanf
#define pf printf

using namespace std;

int main(){

    long kase;
    sf("%ld",&kase);
    int arr[100000+5];

    for(int i=1; i<=kase; i++){

        int cndt,votes;
        sf("%ld %ld",&cndt,&votes);
        memset(arr,0,sizeof(arr));

        for(int i=1; i<=votes; i++){
            long x; sf("%ld",&x);
            arr[x]++;
        }

        int f=0;
        for(int i=1; i<=cndt; i++){
            if(arr[i]){
                double cal = ((arr[i]/(votes*1.00)) * 100.00);
                if(cal > 50){
                    pf("%d\n",i);
                    f=1;
                    break;
                }
            }
        }

        if(!f) puts("-1");

    }



    return 0;
}
