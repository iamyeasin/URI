#include<iostream>
#include<stdio.h>
#define pi 3.14159

using namespace std;

int main()
{
    int val,months,days;
    cin>> val;

    if(val>0)
    {
        int year = val/365;
        if(year >= 1)
        {
            cout<<year<<" ano(s)"<<endl;
            val = val%365;
        }
        else
        {
            cout<<"0 ano(s)"<<endl;
        }


        if(val>=30)
        {
            months = val/30;
            cout<<months<<" mes(es)" <<endl;
            val = val%30;

        }
        else
        {
            cout<<"0 mes(es)"<<endl;
        }

        if(val>=1)
        {
            cout<<val<<" dia(s)"<<endl;
        }
        else
        {
            cout<<"0 dia(s)"<<endl;
        }

    }



    return 0;
}
