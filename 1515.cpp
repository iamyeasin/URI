#include<bits/stdc++.h>
#define sf scanf
#define pf printf

using namespace std;

int main(){

    long kase;

    while(sf("%ld",&kase),kase){
        long year,time,first,res= 213234234;
        string s,ress;
        for(int i=1; i<=kase; i++){

            cin >> s;
            sf("%ld %ld",&year,&time);

            first = (year-time);
            if(first < res) {
                res = first;
                ress = s;
            }
        }

        cout << ress << endl;

    }

    return 0;
}
