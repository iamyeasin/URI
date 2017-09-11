#include<bits/stdc++.h>

using namespace std;

int freq,counter=0;
double ans=0.0;

int main(){
    int lim;
    cin >> lim;

    ans = 0.000;
    for(int i=1; i<=lim; i++){
        ans = (2.00000+ans);
        ans = (1.00/ans);
    }

    printf("%0.10lf\n",1+ans);

    return 0;
}
