#include<bits/stdc++.h>
#define sf scanf
#define pf printf

using namespace std;

// will sort based on differnce priority
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
                sz1++; // no need to collect the same values. because it'll take only one goal to max the points. so counting the same
            }
            else{
                nor.push_back(make_pair(s,r)); //collecting the difference to the different vector pair
            }
        }

        int sz2 = nor.size();
        
        if(g >= sz1){
            points += (sz1*3); 
            g -= sz1;
        }else if(g < sz1){
            points += (g*3)+ (sz1-g); // if thereis less goal i can buy. I also have to add the goals that were giving me draw points
            g -= sz1;
        }

        sort(nor.begin(), nor.end(), sortinrev);

        // else manupulating the differences pair based on the priority which will take less goals to max the points
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
