#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    double code,item;
    cin>>code>>item;

    if(code>=1 || code<=5)
    {
        if(code==1)
        {
            printf("Total: R$ %0.2lf\n",item*4.00);
        }
        else if(code==2)
        {
            printf("Total: R$ %0.2lf\n",item*4.50);
        }
        else if(code==3)
        {
            printf("Total: R$ %0.2lf\n",item*5.00);
        }
        else if(code==4)
        {
            printf("Total: R$ %0.2lf\n",item*2.00);
        }
        else
        {
            printf("Total: R$ %0.2lf\n",item*1.50);
        }
    }


    return 0;
}
