/*I made two solution for that. one is using complex loop another is using some if else condition*/

/*
#include<bits/stdc++.h>

using namespace std;

int main()
{
    double s1,s2,media,total;
    int f1,f2;
    s1=s2=f1=f2=0;

    while(1)
    {
       if(!f1)
       {
           scanf("%lf",&s1);
           if(s1 >= 0 && s1 <= 10)
           {
               f1 = 1;
           }
           else
           {
               printf("nota invalida\n");
           }
       }

       if(!f2)
       {
           scanf("%lf",&s2);
           if(s2 >= 0 && s2 <= 10)
           {
               f2 = 1;
           }
           else
           {
               printf("nota invalida\n");
           }
       }

        if(f1 && f2)
        {
            printf("media = %0.2lf\n",(s1+s2)/2.0);
            break;
        }
    }

    return 0;
}
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    double s1,s2,media,total;
    s1=s2=0;

    while(1)
    {
       scanf("%lf",&s1);
       if(s1 >= 0 && s1 <= 10)
       {
           scanf("%lf",&s2);
           LEB:
           if(s2 >= 0 && s2 <= 10)
           {
               printf("media = %0.2lf\n",(s2+s1)/2.00);
               break;
           }
           else
           {
               printf("nota invalida\n");
               while(1)
               {
                   scanf("%lf",&s2);
                   if(s2 >= 0 && s2 <= 10)
                        goto LEB;
                    else
                    {
                        printf("nota invalida\n");
                    }

               }
           }
       }
       else
       {
           printf("nota invalida\n");
           continue;
       }

    }



    return 0;
}
