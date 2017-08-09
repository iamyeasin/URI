#include<bits/stdc++.h>
#define sf scanf
#define pf printf

using namespace std;

bool ret[100004];

int main(){
    int a,b;
    while(scanf("%d %d",&a,&b) != EOF){
        for(int i=1; i<=b; i++){
            long n; cin >> n;
            ret[n] = 1;
        }
        int fl=0,counter=0; // to check everyone is alive
        for(int i=1; i<=a; i++){
            if(!ret[i]){
                counter++;
                if(counter== (a-b))printf("%d\n",i);
                else printf("%d ",i);
                fl = true;
            }
        }
        if(!fl)printf("*\n");
    }

    return 0;
}
