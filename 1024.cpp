#include<bits/stdc++.h>

using namespace std;

int main()
{
    int kase;
    scanf("%d\n",&kase);

    string s;

    for(int ii=1; ii<=kase; ii++)
    {
        getline(cin,s);
        int sz = s.size();

        for(int i=0; i<sz; i++)
        {
            if(islower(s[i]) || isupper(s[i]))s[i] = s[i] + 3;
        }

        reverse(s.begin(),s.end());

        for(int i=sz/2; i<sz; i++)
        {
            s[i] = s[i]-1;
        }

        cout << s << endl;
    }



    return 0;
}
