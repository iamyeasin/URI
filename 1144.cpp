#include<bits/stdc++.h>

using namespace std;

int main()
{
   long kase,x,y,z;
   scanf("%ld",&kase);

   for(int i=1; i<=kase; i++)
   {
        x = i;
        y = x*x;
        z = x*x*x;

       printf("%ld %ld %ld\n",x,y,z);
       printf("%ld %ld %ld\n",x,y+1,z+1);

   }

    return 0;
}
