#include<stdio.h>
#define sf scanf
#define pf printf

using namespace std;

bool iPower(int x){
    return x&(x-1);
}

int main(){
    long kase;
    sf("%d",&kase);

    int v[10][10];
    bool fal =true;
    for(int m=1; m<=kase; m++){
        fal =true;
        for(int i=1; i<=4; i++){
            for(int j=1; j<=4; j++){
                sf("%d",&v[i][j]);
                if(v[i][j] >= 2048 || iPower(v[i][j])){
                    fal = false;
                }
            }
        }
        if(!fal){
            pf("NONE\n");
            continue;
        }

        bool u,r,l,d; u = r = l = d = false;

        //left
        for(int i=1; i<=4; i++){
            for(int j=2; j<=4; j++){
                if(v[i][j] == v[i][j-1] && v[i][j]){
                    l=true;
                }
                if(v[i][j] != v[i][j-1] && !v[i][j-1]){
                    l=true;
                }
            }
        }

        //right
        for(int i=1; i<=4; i++){
            for(int j=1; j<=3; j++){
                if(v[i][j] == v[i][j+1] && v[i][j]){
                    r=true;
                }
                if(v[i][j] != v[i][j+1] && !v[i][j+1]){
                    r=true;
                }
            }
        }

        //down
        for(int i=1; i<=3; i++){
            for(int j=1; j<=4; j++){
                if(v[i+1][j] == v[i][j] && v[i][j]){
                    d=true;
                }
                if(v[i+1][j] != v[i][j] && !v[i+1][j]){
                    d=true;
                }
            }
        }

        //up
        for(int i=2; i<=4; i++){
            for(int j=1; j<=4; j++){
                if(v[i-1][j] == v[i][j] && v[i-1][j]){
                    u=true;
                }
                if(v[i-1][j] != v[i][j] && !v[i-1][j]){
                    u=true;
                }
            }
        }

            if(d)pf("DOWN");
            if(l && d)pf(" LEFT");
            else if(l) pf("LEFT");

            if(r && (d || l))pf(" RIGHT");
            else if(r)pf("RIGHT");
            if(u && ((d||l) || r))pf(" UP");
            else if(u)pf("UP");



            if((!l && !r && !u && !d)){
                pf("NONE");
            }

            pf("\n");
            // Clearing the array
            for(int i=0; i<6; i++){
                for(int j=0; j<6; j++){
                    v[i][j] = 0;
                }
            }

    }

    return 0;
}
