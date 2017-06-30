/*
Math formula : BINOMIAL THEOREM
R1 = -b+(b^2 - 4ac)/(2a)
R2 = -b-(b^2 - 4ac)/(2a)
Generally this solution for x
*/

#include<iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>

using namespace std;

int main()
{
    double a,b,c,sq,res,r1,r2;
    cin>>a>>b>>c;

    sq = (b*b)-(4*a*c);

    if(sq > 0 && a > 0)
    {
        res = sqrt(sq);

        r1 = (res -b)/(2*a);
        r2 = (-res -b)/(2*a);

        printf("R1 = %0.5lf\n",r1);
        printf("R2 = %0.5lf\n",r2);
    }
    else
    {
        cout<<"Impossivel calcular"<<endl;
    }


    return 0;
}
