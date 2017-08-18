#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define mx 1000005

using namespace std;

int main(){
//
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);

    long kase,b,c;
    sf("%ld",&kase);

    for(int j=1; j<=kase; j++){
        sf("%ld\n",&b);
        long ins[110];

        long ans=0;
        for(int i=1; i<=b; i++){
            char s[123],num[10];
            gets(s);

            if(s[0]=='L'){
                ans--;
                ins[i] = -1;
            }else if(s[0]=='R'){
                ans++;
                ins[i] = +1;
            }
            else{

                int len = strlen(s),fuck=0;
                for(int k=0; k<=len; k++){
                    if(s[k]>= '0' && s[k] <= '9'){
                        num[fuck++] = s[k];
                    }
                }
                int n = atoi(num);
                ins[i] = (ins[n] > 0) ? 1 : -1;
                ans += (ins[n]);
            }
               memset(num,0,sizeof(num));

        }

        pf("%ld\n",ans);

        memset(ins,0,sizeof(ins));



    }

    return 0;
}
