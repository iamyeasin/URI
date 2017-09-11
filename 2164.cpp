#include<bits/stdc++.h>
#define plas 1.61803398874989490000
#define minas -0.61803398874989490000


using namespace std;

int main()
{
    int times;
    cin >> times;

    double ans = (pow(plas,times) - pow(minas,times))/sqrt(5.00);
    printf("%0.1lf\n",ans);

    return 0;
}
