#include<bits/stdc++.h>
#define mx 1000007

using namespace std;

int main(){
    int a,b;
    scanf("%d\n",&a);
    string s;

    while(a--){
        getline(cin,s);
        int sz = s.size();
        printf("%0.2lf\n",sz/100.00);
    }

    return 0;
}
