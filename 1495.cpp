#include<bits/stdc++.h>
#define sf scanf
#define pf printf

using namespace std;

bool sortinrev(const pair<int,int> &a, const pair<int,int> &b){
    return(abs(a.first - a.second) < abs(b.first-b.second) );
}


int main(){

    long n,g;
    vector < pair <long ,long > > eql,nor;

    while(sf("%ld %ld",&n,&g) != EOF){
        long s,r,points=0,sz1=0;

        for(int i=1; i<=n; i++){
            sf("%ld%ld",&s,&r);
            if(s == r){
                sz1++;
            }
            else{
                nor.push_back(make_pair(s,r));
            }
        }

        int sz2 = nor.size();

        if(g >= sz1){
            points += (sz1*3);
            g -= sz1;
        }else if(g < sz1){
            points += (g*3)+ (sz1-g);
            g -= sz1;
        }

        sort(nor.begin(), nor.end(), sortinrev);

        if(sz2 >=0){
          for(int i=0; i<sz2; i++){
            long s,r;
            s = nor[i].first; r = nor[i].second;
            if(s>r)points += 3;
            else{
                int dorkar = (r-s);
                if(g >= dorkar+1){
                    points += 3;
                    g -= (dorkar+1);
                }
                else if(dorkar == g){
                    points += 1;
                    g -= (dorkar);
                }
            }

          }
        }

        pf("%ld\n",points);
        nor.clear();

    }


    return 0;
}
