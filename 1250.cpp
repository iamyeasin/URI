#include<bits/stdc++.h>
#define sf scanf
#define pf printf

using namespace std;

int main()
{
        long kase;
        sf("%ld",&kase);

        for(int i=1; i<=kase; i++)
        {
                long h,heit[50],hits=0;
                char jum[500];
                sf("%ld",&h);

                for(int j=0; j<h; j++)
                {
                    sf("%ld",&heit[j]);
                }
                getchar();
                gets(jum);
                for(int i=0; i<h; i++)
                {
                    if((jum[i] == 'S' && (heit[i] == 1 || heit[i] == 2)) || (jum[i] == 'J' && (heit[i] > 2)))
                    {
                        hits++;
                    }
                }

                pf("%d\n",hits);
        }




    return 0;
}
