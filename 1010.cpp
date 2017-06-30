#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    double code1,num1,price1,code2,num2,price2,total;
    cin>>code1>>num1>>price1;
    cin>>code2>>num2>>price2;

    if(num1<=code1 && num2<=code2)
    {
        total = (num1*price1)+(num2*price2)*1.00;
    }

    printf("VALOR A PAGAR: R$ %0.2lf\n",total);


    return 0;
}
