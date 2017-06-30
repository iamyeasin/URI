#include<bits/stdc++.h>

using namespace std;

int main()
{
   long kase,x,y,z;
   scanf("%ld %ld",&x,&y);

   for(int i= 1; i <= y; i++)
   {
        if(i%x == 0)
        {
            printf("%ld",i);
            printf("\n");
        }
        else
        {
            printf("%ld ",i);
        }


   }

    return 0;
}
