#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<iostream>

using namespace std;

int main()
{


    double arr[3];
    scanf("%lf %lf %lf",&arr[0],&arr[1],&arr[2]);
    if(arr[0] > 0 && arr[1] > 0 && arr[2] > 0)
    {

        sort(arr,arr+3);

        double A = arr[2];
        double B = arr[1];
        double C = arr[0];

        if(A >= (B+C))
            printf("NAO FORMA TRIANGULO\n");
        else if((A*A) == (B*B) + (C*C))
            printf("TRIANGULO RETANGULO\n");
        else if((A*A) > (B*B + C*C))
            printf("TRIANGULO OBTUSANGULO\n");
        else if((A*A) < (B*B + C*C))
            printf("TRIANGULO ACUTANGULO\n");

        if(A == B && B == C && A == C)
            printf("TRIANGULO EQUILATERO\n");
        else if(A == B || A == C || B == C)
            printf("TRIANGULO ISOSCELES\n");


    }

    return 0;
}
