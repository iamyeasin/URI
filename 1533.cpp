#include<bits/stdc++.h>
#define sf scanf
#define pf printf

using namespace std;

int main(){

    long kase;
    int sus[1024],cop[1024];

    while(sf("%ld",&kase),kase){
        for(int i=0; i<kase; i++){
            sf("%d",&sus[i]);
            cop[i] = sus[i];
        }
        sort(sus,sus+kase,greater<int>());
        int lookFor = sus[1];

        for(int i=0; i<kase; i++){
            if(lookFor == cop[i]){
                printf("%d\n",i+1);
            }
        }

    }



    return 0;
}
