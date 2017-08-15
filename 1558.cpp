#include<bits/stdc++.h>
#define sf scanf
#define pf printf

using namespace std;

int main(){

    long n,k,x;
    long a,b,sum;

    while(sf("%ld",&sum) != EOF){
        if(!sum){
            printf("YES\n");
            continue;
        }

        int rt = sqrt(sum)+1;
        int f=0;
        for(int a=1; a<=rt; a++){
            long res = (sum - (a*a));
            b = sqrt(res);

            if(((a*a) + (b*b) ) == sum){
//                cout << a << " " << b << " " << sum << endl;
                printf("YES\n");f=1;break;
            }
        }
        if(!f)printf("NO\n");
    }


    return 0;
}
