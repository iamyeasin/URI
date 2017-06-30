#include <iostream>
#include <map>
#include <iterator>
#include <stdio.h>

using namespace std;

int main()
{
    double salary,percent;
    scanf("%lf",&salary);
    double s = salary;

    if(salary >= 0 && salary <= 400.00)
    {
        percent = 15;
        salary = salary + salary*(15/100.00);
    }
    else if(salary >= 400.01 && salary <= 800.00)
    {
        percent = 12;
        salary = salary + salary*(12/100.00);
    }
    else if(salary >= 800.01 && salary <= 1200.00)
    {
        percent = 10;
        salary = salary + salary*(10/100.00);
    }
    else if(salary >= 1200.01 && salary <= 2000.00)
    {
        percent = 7;
        salary = salary + salary*(7/100.00);
    }
    else
    {
        percent = 4;
        salary = salary + salary*(percent/100.00);
    }

    printf("Novo salario: %.2lf\n",salary);
    printf("Reajuste ganho: %.2lf\n",salary - s);
    printf("Em percentual: %.0lf %c\n",percent,37);



    return 0;
}

