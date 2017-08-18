#include<bits/stdc++.h>
#define sf scanf
#define pf printf

using namespace std;


int main(){

    int kase;
    sf("%d",&kase);

    int arr[10007];

    for(int i=1; i<=kase; i++){
        int h; sf("%d",&h);
        for(int j=0; j<h; j++){
            sf("%d",arr+j);
        }
        sort(arr,arr+h+1);

        int n = unique(arr+1,arr+h+1)-arr-1;
        pf("%d\n",n);
        memset(arr,0,sizeof(arr));
    }


    return 0;
}
