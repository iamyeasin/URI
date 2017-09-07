#include<bits/stdc++.h>
#define mx 1000007

using namespace std;

int change[] = {2,5,10,20,50,100};

bool isPoss(int n){
    for(int i=0; i<6; i++){
        for(int j=i; j<6; j++){
            if(change[j] + change[i] == n){
                return true;
            }
        }
    }
    return false;

}

int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b),(a||b)){
        int dif = abs(a-b);
        if(isPoss(dif))puts("possible");
        else puts("impossible");

    }



    return 0;
}
