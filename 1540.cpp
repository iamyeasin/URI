#include<bits/stdc++.h>
#define sf scanf
#define pf printf

using namespace std;

int main(){

    long kase;
    cin >> kase;

    for(int i=1; i<=kase; i++){
        long a,b,c,d;
        cin >> a >> b >> c >> d;

        double ans = (((d-b)*1.00)/((c-a)*1.00));
        double frac = trunc((ans-floor(ans))*100);

        if(frac < 10){
            printf("%0.0lf,%0.0lf0\n",floor(ans),frac); // If the result is less than 10. need to print an extra 0.
        }else{
            pf("%0.0lf,%0.0lf\n",floor(ans),frac);
        }


    }



    return 0;
}
