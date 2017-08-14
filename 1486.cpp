#include<stdio.h>
#define sf scanf
#define pf printf

using namespace std;

int main(){

    long p,n,c;
    bool dig[1024][1024];

    while(sf("%ld %ld %ld",&p,&n,&c),((p||n) || c)){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=p; j++){
                sf("%d",&dig[i][j]);
            }
        }

        long counter=0,f=0;
        int vc[10024],m=1;

        for(int i=1; i<=p; i++){
            int l=0,f=0;
            for(int j=1; j<=n; j++){
                if(dig[j][i]){
                    l++;
                    f=0;
                }
                else {
                    if(l>=c)counter++;
                    l = 0;
                    f=1;
                }
            }
            if(!f){
                if(l>=c)counter++;
            }
        }


       pf("%d\n",counter);
    }


    return 0;
}
