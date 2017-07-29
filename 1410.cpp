#include<bits/stdc++.h>
#define sf scanf
#define pf printf

using namespace std;

int main(){

    int a,b,att[10050],def[10050];
    while(sf("%d %d",&a,&b), (a||b)){
        int les1,les2,n;

        for(int i=0; i<a; i++){
            scanf("%d",att+i);
            if(!i){
                les1=att[i];
                continue;
            }
            if(att[i] < les1) les1 = att[i];

        }

        for(int i=0; i<b; i++){
            sf("%d",def+i);
        }

        sort(def,def+b);
        les2 = def[1];

        if(les1>=les2)puts("N");
        else puts("Y");

    }



    return 0;
}
