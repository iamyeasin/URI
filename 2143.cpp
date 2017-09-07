#include<bits/stdc++.h>
#define mx 1000007

using namespace std;

int main()
{
    int a,b;
    while(scanf("%d",&a),(a)){
        while(a--){
            scanf("%d",&b);
            if(b&1) printf("%d\n",2*b-1); //last 1 person only needs to order once.
            else printf("%d\n",2*b-2);  // last 2 person order once
        }
    }


    return 0;
}
