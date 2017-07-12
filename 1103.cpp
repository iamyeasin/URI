#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define valid(nx,ny) (nx>0 && ny>0)

using namespace std;

int main()
{
    int minit=0,sh,sm,fh,fm;

    while(sf("%d %d %d %d",&sh,&sm,&fh,&fm))
    {
        if(!sh && !sm && !fh && !fm) break;

        minit=0;
        int h = fh - sh;
        int m = fm - sm;

        if(m < 0)
        {
            m += 60;
            h--;
        }
        if(h<0)
        {
            h+=24;
        }

        minit = (h*60)+m;
        cout << minit << endl;
    }





    return 0;
}
