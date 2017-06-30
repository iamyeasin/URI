#include<iostream>
#include<stdio.h>
#define pi 3.14159

using namespace std;

int main()
{
    int time,hour=0,minit=0,sec;
    cin>>sec;

    if(sec>0)
    {
        minit = sec /60;
        if(minit<60)
        {
            sec = sec%60;
            cout<<"0:"<<minit<<":"<<sec<<endl;
        }
        else
        {
            hour = minit/60;
            minit = minit%60;
            sec = sec%60;

            cout<<hour<<":"<<minit<<":"<<sec<<endl;
        }
    }


    return 0;
}
