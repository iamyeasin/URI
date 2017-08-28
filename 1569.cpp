#include<bits/stdc++.h>
#define mx 1000007

using namespace std;

int main()
{
//    freopen("in.txt","rt",stdin);
//    freopen("out.txt","wt",stdout);

    long kase;
    static int snk[105], player[mx];
    scanf("%ld",&kase);

    while(kase--){
        long a,b,c;
        scanf("%ld%ld%ld",&a,&b,&c);
        for(int i=1; i<=105; i++)snk[i]=0;
        for(int i=1; i<=a; i++)player[i]=1;

        for(int i=1; i<=b; i++){
                int x,y;
                scanf("%d%d",&x,&y);
                snk[x] = y ;
        }

        bool win= 0;

        for(int i=1,x=1; i<=c; i++,x++){
            long n;
            scanf("%ld",&n);
            if(x>a)x=1;

            if(!win){
                int nx = player[x] + n;
                if((snk[nx]) > 0) {
                        player[x] = snk[nx];
                        if(player[x] >= 100){
                            win =1; player[x] = 100;
                        }
                }
                else if(snk[nx]+n <= 0){
                    player[x] = 1;
                }
                else{
                    player[x] = nx;
                }

                if(player[x] >= 100) {
                    win =1;
                    player[x]=100;
                }
//
            }

        }

        for(int i=1; i<=a; i++){
//            cout << "Position of player " << i << " is " << player[i] <<  "." << endl;
            printf("Position of player %d is %d.\n",i,player[i]);
        }
    }

    return 0;
}
