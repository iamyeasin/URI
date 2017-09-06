#include<bits/stdc++.h>
#define mx 1000007

using namespace std;

int main()
{
    int n,t=0,th=0,f=0,fi=0;
    cin >> n;

    while(n--){
        int x; cin >> x;
        if(!(x&1))t++;
        if(!(x%3))th++;
        if(!(x%4))f++;
        if(!(x%5))fi++;
    }

    cout << t << " Multiplo(s) de 2" << endl;
    cout << th << " Multiplo(s) de 3" << endl;
    cout << f << " Multiplo(s) de 4" << endl;
    cout << fi << " Multiplo(s) de 5" << endl;


    return 0;
}
