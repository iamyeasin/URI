//the squence is 3 5 9 14 20 ... law is => a(n) = a(n-1)+(n+1)

#include<bits/stdc++.h>
#define sf scanf
#define pf printf

using namespace std;
long long num[100001];

void init()
{
    int k=3;
    num[4] = 2;
    for(int i=5; i<100001; i++)
    {
        num[i]= k+num[i-1];
        k += 1;
//        cout << num[i] << endl;
    }
}

int main()
{
    init();

    long n1,n2,kase;
    cin >> n1;
    cout << num[n1]<<endl;

    return 0;
}
