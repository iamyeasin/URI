#include<iostream>
#include<math.h>
#include<stdio.h>

using namespace std;

int main()
{

    double vali,param,fracpart,intpart;
    cin>>param;

   // fracpart = modf(param,&intpart);
    //int val = intpart /25;

    if(param>=0.00 && param<=100.00)
    {
        if(param >= 0.00 && param <= 25.00)
        {
            cout<<"Intervalo [0,25]"<<endl;
        }
        if(param>25.00 && param<=50.00)
        {
            cout<<"Intervalo (25,50]"<<endl;
        }
        if(param>50.00 && param<=75.00)
        {
            cout<<"Intervalo (55,70]"<<endl;
        }
        if(param>75.00 && param<=100.00)
        {
            cout<<"Intervalo (75,100]"<<endl;
        }


    }
    else
    {
        cout<<"Fora de intervalo"<<endl;
    }



    return 0;
}
