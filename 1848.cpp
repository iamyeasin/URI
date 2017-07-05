#include<bits/stdc++.h>
#define pf printf
#define sf scanf

using namespace std;

bool bits[5];
int m=0;

int bin2Dec()
{
    int n=0,k=2;
    for(int i=0; i <= 2; i++)
    {
        if(bits[i])
        {
            n += pow(2,k);
        }
        k--;
    }
    memset(bits,0,sizeof(bits));
    return n;


}


int main()
{
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);

    int kase=0;
    while(kase<3)
    {
        char st[10];
        gets(st);

        if(st[0] == 'c')
        {
            kase++;
            pf("%d\n",m);
            m=0;
        }
        else
        {
            bits[0] = (st[0] == '-') ? 0 : 1;
            bits[1] = (st[1] == '-') ? 0 : 1;
            bits[2] = (st[2] == '-') ? 0 : 1;
            m += bin2Dec();

//            cout << bits[0] << " " << bits[1] << " " << bits[2] << endl;

        }


    }




    return 0;
}
