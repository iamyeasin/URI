#include<bits/stdc++.h>
#define mx 1000007

using namespace std;

int main()
{
    int f,s;

    while(scanf("%d %d",&f,&s) != EOF){
        for(int i=1; i<=10000; i++){
            int x = f*i, y = s*i;
            if(abs(x-y) >= s){
                printf("%d\n",i);
                break;
            }
        }
    }
    return 0;
}
