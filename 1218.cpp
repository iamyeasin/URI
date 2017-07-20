#include<bits/stdc++.h>
#define sf scanf
#define pf printf

using namespace std;

int main()
{

    int f,m,c=0,tc=0;
    string s2,s3,line;
    char s[6],s1[5000];

    while(scanf("%d\n",&c) != EOF)
    {

            f=0; m =0;
            if(tc>=1)pf("\n");
            getline(cin,line);
            stringstream ss(line);
            int x;

            while(ss  >> x && ss >> s2)
            {
                    if(x == c && s2 == "F")
                        f++;
                    else if(x == c && s2 == "M")
                        m++;
            }
            pf("Caso %d:\n",++tc);
            pf("Pares Iguais: %d\n",m+f);
            pf("F: %d\n",f);
            pf("M: %d\n",m);

    }




    return 0;
}
