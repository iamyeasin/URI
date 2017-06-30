#include<bits/stdc++.h>

using namespace std;

int main()
{
    double notes,coins,i,ff;
    int arr[6]= {100,50,20,10,5,2},f,j;
    int arr1[5]= {50,25,10,5,1};
    scanf("%lf",&coins);

    int x = coins;
    coins = (coins - (double)x)*100;

    int m = coins;
    printf("NOTAS:\n");

    j =0;
    while(j<6)
    {
        f = arr[j];
        if(x >= 100 || x >=50 || x >= 20 || x >= 10 || x >= 5 || x >= 2)
        {
            printf("%d nota(s) de R$ %0.2lf\n",x/f,f*1.00);
            x = x%f;
        }
        else
        {
            printf("0 nota(s) de R$ %0.2lf\n",f*1.00);
        }
        j++;
    }

    printf("MOEDAS:\n");

    if(x>=1)
    {
        printf("%d moeda(s) de R$ 1.00\n",x);
        //m+=1;
    }
    else
    {
        printf("0 moeda(s) de R$ 1.00\n");
    }

    for(int i=0; i<5; i++)
    {
        f = arr1[i];
        if(m >=50 || m >= 25 || m >= 10 || m >= 5 || m >= 1)
        {
            printf("%d moeda(s) de R$ %0.2lf\n",m/f,(f*1.00)/100);
            m %=f;
        }
        else
        {
            printf("0 moeda(s) de R$ %0.2lf\n",(f*1.00)/100);
        }
    }


    return 0;
}


